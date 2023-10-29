# 宏概述

介绍了 Lean 4 宏系统机制的官方文献可以在 [Beyond Notations: Hygienic Macro Expansion for Theorem Proving Languages](https://arxiv.org/abs/2001.10490)  中找到，Sebastian Ullrich 和 Leonardo de Moura 是该文的作者，附带的示例代码可以在该论文的代码 [supplement](https://github.com/Kha/macro-supplement) 中找到。该补充材料还包括宏展开器的工作实现，因此对于对细节感兴趣的人来说，是一个很好的案例研究。

## 什么是 Lean 中的宏？

宏是一个接收语法树并生成新的语法树的函数。宏有很多用途，但其中两个重要的用途是：a) 允许用户在不必扩展核心语言的情况下扩展语言的新语法结构；b) 允许用户自动化一些其他情况下极端重复、耗时和容易出错的任务。

一个动机的例子是集合构建符号。我们希望能够只用 `{0, 1, 2}` 来表示自然数集合中的 0、1和2。然而，Lean 并不原生支持这种语法，而且 Mathlib 中实际的集合定义也不允许我们以这种方式声明集合；直接使用集合 API 会要求我们写下 `Set.insert 1 (Set.insert 2 (Set.singleton 3))`。相反，我们可以教会 Lean 的宏系统识别 `{0, 1, 2}`，将其视为现有方法的组合，并让宏代替我们创建 `Set.insert...` 的调用。通过这种方式，我们可以拥有更易读、更方便的语法，而无需扩展 Lean 本身，同时保留了简单的插入/单例 API。

## 如何处理宏

一般的过程如下：

1. Lean 解析一个命令，创建一个包含未展开宏的 Lean 语法树。

2. Lean 重复进行以下循环（展开过程 ~>（宏的卫生处理和展开）~> 展开过程...）

第2步的循环重复进行，直到没有需要展开的宏，然后展开过程可以正常完成。这个重复是必需的，因为展开过程中可能会产生新的需要展开的宏。每次循环中，Lean 会应用不同的宏展开方法进行处理和宏卫生处理，以保证宏的调用是正确的、可重用的，并且在整个扩展过程中保持内部变量的一致性和独立性。

## 宏的案例研究

在 [supplement](https://github.com/Kha/macro-supplement) 的示例代码中，有一个案例研究可以让对细节感兴趣的人深入了解 Lean 的宏系统。它包含了一个宏展开器的工作实现，用于将定义的宏应用于示例代码中的语法树，并展开出相应的结果。

在这个案例研究中，可以看到 Lean 的宏系统如何处理宏展开和宏卫生。通过学习这个案例，可以更好地理解 Lean 中宏的用途、工作原理和应用方法。
宏可以展开为其他宏，并且可能展开为需要 elaborator 信息的代码。如您所见，宏解析和展开的过程与非宏代码的解析和阐释是交织在一起的。

在 Lean 中，默认情况下，宏是卫生的，这意味着系统在内外重复使用相同名称时避免了意外的名称捕获。用户有时可能想要禁用卫生，可以使用`set_option hygiene false`命令来实现。关于卫生和它在官方论文和补充中的实现的更深入信息，请查阅本指南顶部链接的官方论文和补充。

## "a" 宏的要素（重要类型）

在概念上，宏有两个组件，必须由用户实现，即解析器和语法转换器，其中后者是一个指定输入语法应该展开为什么的函数。还有第三个组件，语法类别，比如`term`、`tactic`和`command`，但不一定总是需要声明一个新的语法类别。在宏的上下文中说到“解析器”时，我们指的是核心类型`Lean.ParserDescr`，它解析类型为`Lean.Syntax`的元素，其中`Lean.Syntax`表示 Lean 语法树的元素。语法转换器是类型为`Syntax -> MacroM Syntax`的函数。Lean 对此类型有一个同义词，即`Macro`。`MacroM` 是一个携带了实现宏展开所需的状态的 monad，包括实现卫生所需的信息。

作为示例，再次参考 Mathlib 的集合构建符号：

```lean
/- Declares a parser -/
syntax (priority := high) "{" term,+ "}" : term

/- Declares two expansions/syntax transformers -/
macro_rules
  | `({$x}) => `(Set.singleton $x)
  | `({$x, $xs:term,*}) => `(Set.insert $x {$xs,*})

/- Provided `Set` has been imported (from Mathlib4), these are all we need for `{1, 2, 3}` to be valid notation to create a literal set -/

```

这个例子还可以清楚地说明为什么宏（以及几乎所有 Lean 4 的元编程功能）是以 `Syntax` 类型的参数为函数，例如 `Syntax -> MacroM Syntax`；顶层语法元素是触发宏展开的实际元素，通过与声明的解析器进行匹配，作为用户，您几乎总是希望检查和变换初始语法元素（尽管有时可以忽略，比如无参数的 exfalso 策略）。

简要回顾一下 Lean 提供的 API，`Lean.Syntax` 基本上符合基本语法树类型的预期。以下是稍微简化的表示，省略了 `atom` 和 `ident` 构造函数中的细节；用户可以使用 `Lean` 命名空间提供的 `mkAtom` 和 `mkIdent` 方法创建符合这个简化表示的原子和标识符。

```lean
# open Lean
inductive Syntax where
  | missing : Syntax
  | node (kind : SyntaxNodeKind) (args : Array Syntax) : Syntax
  | atom : String -> Syntax
  | ident : Name -> Syntax
```

对于那些感兴趣的人来说，`MacroM` 是一个 `ReaderT`：

```lean
# open Lean
abbrev MacroM := ReaderT Macro.Context (EStateM Macro.Exception Macro.State)
```

其他相关组件的定义如下：

- Let $N$ be the set of nodes in the system, which represents the states or configurations of the system.
- Let $A$ be the set of actions that can be taken in the system. Each action is represented by a pair $(n, a)$, where $n \in N$ is the current state and $a \in A$ is the action to be taken.
- Let $\rightarrow$ be the transition relation, which defines the changes in the state of the system when an action is taken. For each $(n, a) \in N \times A$, $\rightarrow(n, a)$ is the set of states that can be reached from $n$ by taking action $a$.
- Let $I$ be the initial state of the system, which represents the starting configuration of the system.
- Let $G$ be the goal condition, which specifies the desired property or state that the system should satisfy.

Using these definitions, we can formalize the problem of verifying the correctness of a system as a reachability problem. The goal is to determine if there exists a sequence of actions that can be taken from the initial state $I$ such that the system reaches a state satisfying the goal condition $G$. This can be represented as:

$\exists p. I \xrightarrow{p} G$

where $p$ is a sequence of actions leading from $I$ to $G$, and $\xrightarrow{p}$ represents the composition of transitions induced by the actions in $p$.

The reachability problem can then be expressed as a logical formula, using temporal logic operators. For example, the above formula can be written as:

$⧫(\rhd^* G)$

where $\rhd$ represents the "next" operator, which asserts that a state satisfying $G$ can be reached in the next step, and $⧫$ represents the "eventually" operator, which asserts that there exists a sequence of actions leading to a state satisfying $G$.

To verify the correctness of the system, we can use model checking techniques to determine if the reachability formula holds. Model checking involves systematically exploring the states and transitions of the system to check if the desired property holds for all possible sequences of actions.

In summary, the LEAN theorem states that the verification of the correctness of a system can be reduced to checking if a reachability formula holds. By formalizing the system components and using model checking techniques, we can systematically verify if the system satisfies the desired properties.

```lean
# open Lean
structure Context where
  methods        : MethodsRef
  mainModule     : Name
  currMacroScope : MacroScope
  currRecDepth   : Nat := 0
  maxRecDepth    : Nat := defaultMaxRecDepth
  ref            : Syntax

inductive Exception where
  | error             : Syntax → String → Exception
  | unsupportedSyntax : Exception

structure State where
  macroScope : MacroScope
  traceMsgs  : List (Prod Name String) := List.nil
  deriving Inhabited
```

作为一个回顾/检查清单，用户需要关注的三个（有时只有两个，取决于是否需要新的语法类别）组件是：

0. 可能需要使用 `declare_syntax_cat` 来声明一个新的语法类别
1. 使用 `syntax` 或 `macro` 声明一个解析器
2. 使用 `macro_rules` 或 `macro` 声明一个扩展/语法转换器

解析器和语法转换器可以手动声明，但建议使用模式语言和 `syntax`、`macro_rules` 和 `macro`。

## 使用 `declare_syntax_cat` 声明语法类别

`declare_syntax_cat` 声明一个新的语法类别，比如 `command`、`tactic` 或 mathlib4 的 `binderterm`。这些是引用/反引用中可以引用的不同事物的类别。`declare_syntax_cat` 调用 `registerParserCategory` 并生成一个新的解析器描述符：

```lean
set_option trace.Elab.definition true in
declare_syntax_cat binderterm

/-
Output:

[Elab.definition.body] binderterm.quot : Lean.ParserDescr :=
Lean.ParserDescr.node `Lean.Parser.Term.quot 1024
  (Lean.ParserDescr.binary `andthen (Lean.ParserDescr.symbol "`(binderterm|")
    (Lean.ParserDescr.binary `andthen (Lean.ParserDescr.cat `binderterm 0)
      (Lean.ParserDescr.symbol ")")))
-/
```

声明一个新的语法类别，比如这个，会自动声明一个引用操作符 `` `(binderterm|...)``。这个管道前缀 `<thing>|` 在语法引用中用于指定给定引用所期望的类别。管道前缀不用于 `term` 和 `command` 类别的元素（因为它们被认为是默认的），但需要用于其他所有元素。

## 解析器和 `syntax` 关键字

在内部，类型为 `Lean.ParserDescr` 的元素是用解析器组合子实现的。然而，Lean 提供了使用宏/模式语言编写解析器的能力，通过 `syntax` 关键字实现。这是编写解析器的推荐方法。例如，`rwa`（重写，然后使用假设）策略的解析器如下：

```lean
# open Lean.Parser.Tactic
set_option trace.Elab.definition true in
syntax "rwa " rwRuleSeq (location)? : tactic

/-
which expands to:
[Elab.definition.body] tacticRwa__ : Lean.ParserDescr :=
Lean.ParserDescr.node `tacticRwa__ 1022
  (Lean.ParserDescr.binary `andthen
    (Lean.ParserDescr.binary `andthen (Lean.ParserDescr.nonReservedSymbol "rwa " false) Lean.Parser.Tactic.rwRuleSeq)
    (Lean.ParserDescr.unary `optional Lean.Parser.Tactic.location))

-/

```

字面量被写作双引号字符串（`"rwa "`期望字面量字符序列`rwa`，而尾部的空格给格式化程序提供了一个提示：当漂亮打印此语法时，在`rwa`后面添加一个空格）；`rwRuleSeq`和`location`本身是`ParserDescr`s，我们用`: tactic`结束，指定前面的解析器是`tactic`语法类别中的一个元素。括号`(location)?`周围的括号是必要的（而不是`location?`），因为Lean 4允许问号在标识符中使用，所以`location?`是一个以问号结尾的单一标识符，这不是我们想要的。

名称`tacticRwa__`是自动生成的。您可以为使用`syntax`关键词声明的解析器描述符指定名称，如下所示：

```lean
set_option trace.Elab.definition true in
syntax (name := introv) "introv " (colGt ident)* : tactic

/-
[Elab.definition.body] introv : Lean.ParserDescr :=
Lean.ParserDescr.node `introv 1022
  (Lean.ParserDescr.binary `andthen (Lean.ParserDescr.nonReservedSymbol "introv " false)
    (Lean.ParserDescr.unary `many
      (Lean.ParserDescr.binary `andthen (Lean.ParserDescr.const `colGt) (Lean.ParserDescr.const `ident))))
-/
```

## 模式语言

可用的量词包括 `?`（出现一次或零次，见下面的注释）、`*`（出现零次或多次）和 `+`（出现一次或多次）。

请注意，Lean 让 `?` 在标识符中可用，所以如果我们想让解析器查找可选的 `location`，我们需要写成 `(location)?`，括号充当分隔符，因为 `location?` 会在标识符 `location?` 下查找内容（其中 `?` 是标识符的一部分）。

括号可以用作分隔符。

可以使用 `$ts,*` 来构造逗号分隔的列表。

"扩展片段" 可以用 `$[..]` 来构造。详细信息请参见官方论文（第 12 页）。

文字是用双引号括起来的字符串表示。文字可以使用尾随空格（例如 `rwa` 或 `introv` 策略）来告诉漂亮打印程序应如何显示，但这样的空格不会阻止没有尾随空格的文字匹配。空格是相关的，但不是字面上解释的。当将 ParserDescr 转换为 Parser 时，实际的令牌匹配器 [使用提供的字符串的 .trim 方法](https://github.com/leanprover/lean4/blob/53ec43ff9b8f55989b12c271e368287b7b997b54/src/Lean/Parser/Basic.lean#L1193)，但生成的格式化程序 [使用指定的空格](https://github.com/leanprover/lean4/blob/8d370f151f7c88a687152a5b161dcb484c446ce2/src/Lean/PrettyPrinter/Formatter.lean#L328)，即将语法中的原子 "rwa" 转换为作为漂亮打印输出的一部分的字符串 rwa。

## 用 `macro_rules` 进行语法扩展以及它的解糖方式。

`macro_rules` 允许您使用类似于 `match` 语句的语法声明给定 `Syntax` 元素的扩展。匹配分支的左侧是一个引言（对于除 `term` 和 `command` 之外的类别，带有前导 `<cat>|`），在其中用户可以指定他们想要写的模式。
`LEAN` 定理证明系统的一个特点是，如果有多个扩展适用于特定的匹配规则，`LEAN` 将首先尝试最近声明的扩展，如果之前的尝试失败，则会尝试其他匹配规则的扩展。这个功能对于扩展现有的策略非常有用。

下面的示例展示了重试行为以及使用 `macro` 语法声明的宏仍然可以使用 `macro_rules` 声明其他扩展的事实。`transitivity` 策略的实现可以用于 `Nat.le` 或者 `Nat.lt`，其中 `Nat.lt` 版本是最近声明的，所以首先尝试它，但如果失败（例如，实际问题中的项是 `Nat.le`），会尝试下一个潜在的扩展规则：

```lean
macro "transitivity" e:(colGt term) : tactic => `(tactic| apply Nat.le_trans (m := $e))
macro_rules
  | `(tactic| transitivity $e) => `(tactic| apply Nat.lt_trans (m := $e))

example (a b c : Nat) (h0 : a < b) (h1 : b < c) : a < c := by
  transitivity b <;>
  assumption

example (a b c : Nat) (h0 : a <= b) (h1 : b <= c) : a <= c := by
  transitivity b <;>
  assumption

/- This will fail, but is interesting in that it exposes the "most-recent first" behavior, since the
  error message complains about being unable to unify mvar1 <= mvar2, rather than mvar1 < mvar2. -/
/-
example (a b c : Nat) (h0 : a <= b) (h1 : b <= c) : False := by
  transitivity b <;>
  assumption
-/
```

为了看到实际展开的去糖语法的定义，我们可以再次使用`set_option trace.Elab.definition true`
然后观察Mathlib4中定义的`exfalso`策略的输出。

```lean

set_option trace.Elab.definition true in
macro "exfalso" : tactic => `(tactic| apply False.elim)

/-
Results in the expansion:

[Elab.definition.body] _aux___macroRules_tacticExfalso_1 : Lean.Macro :=
fun x =>
  let discr := x;
  /- This is where Lean tries to actually identify that it's an invocation of the exfalso tactic -/
  if Lean.Syntax.isOfKind discr `tacticExfalso = true then
    let discr := Lean.Syntax.getArg discr 0;
    let x := discr;
    do
      /- Lean getting scope/meta info from the macro monad -/
      let info ← Lean.MonadRef.mkInfoFromRefPos
      let scp ← Lean.getCurrMacroScope
      let mainModule ← Lean.getMainModule
      pure
          (Lean.Syntax.node Lean.SourceInfo.none `Lean.Parser.Tactic.seq1
            #[Lean.Syntax.node Lean.SourceInfo.none `null
                #[Lean.Syntax.node Lean.SourceInfo.none `Lean.Parser.Tactic.apply
                    #[Lean.Syntax.atom info "apply",
                      Lean.Syntax.ident info (String.toSubstring "False.elim")
                        (Lean.addMacroScope mainModule `False.elim scp) [(`False.elim, [])]]]])
  else
    /- If this wasn't actually an invocation of the exfalso tactic, throw the "unsupportedSyntax" error -/
    let discr := x;
    throw Lean.Macro.Exception.unsupportedSyntax
-/
```

我们还可以自己创建语法变换声明，而不使用 `macro_rules`。我们需要给我们的解析器命名，并使用属性 `@[macro myExFalsoParser]` 将我们的声明与解析器相关联：

```lean
# open Lean
syntax (name := myExfalsoParser) "myExfalso" : tactic

-- remember that `Macro` is a synonym for `Syntax -> TacticM Unit`
@[macro myExfalsoParser] def implMyExfalso : Macro :=
fun stx => `(tactic| apply False.elim)

example (p : Prop) (h : p) (f : p -> False) : 3 = 2 := by
  myExfalso
  exact f h
```

在上面的例子中，我们仍然使用了 Lean 提供的创建引用的语法糖，因为它更直观并可以节省一些工作。但也有可能完全不使用语法糖：

```lean
syntax (name := myExfalsoParser) "myExfalso" : tactic

@[macro myExfalsoParser] def implMyExfalso : Lean.Macro :=
  fun stx => pure (Lean.mkNode `Lean.Parser.Tactic.apply
    #[Lean.mkAtomFrom stx "apply", Lean.mkCIdentFrom stx ``False.elim])

example (p : Prop) (h : p) (f : p -> False) : 3 = 2 := by
  myExfalso
  exact f h
```

## `macro`关键字

`macro`是一个快捷方式，允许用户同时声明解析器和扩展，以方便使用。可以使用单独的`macro_rules`块为`macro`调用生成的解析器添加附加扩展（请参见`macro_rules`部分中的示例）。

## 反扩展器

TODO；目前，可以在Mathlib.Set中查看反扩展器的示例。

## 更多说明性示例：

[Mathlib4中的Tactic.Basic](https://github.com/leanprover-community/mathlib4/blob/master/Mathlib/Tactic/Basic.lean)文件包含了很多很好的学习示例。

## 实用提示：

您可以通过将此选项设置为true来观察以某种方式使用宏系统的命令和函数的输出：`set_option trace.Elab.definition true`

Lean还提供了通过`set_option ... in`语法将选项设置限制在某个区域的选项）：

可以使用命令选项`set_option hygiene false`禁用卫生处理。