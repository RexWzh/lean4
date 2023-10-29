# 声明

-- 待办事项（修复）

声明名称
=================

声明名称是一个相对于当前命名空间以及（在查找期间）开放的命名空间集合，解释为层次化的标识符。

```lean
namespace A
  opaque B.c : Nat
  #print B.c -- opaque A.B.c : Nat
end A

#print A.B.c -- opaque A.B.c : Nat
open A
#print B.c -- opaque A.B.c : Nat
```

以下划线开头的声明名字是为内部使用保留的。以特殊原子名字 ``_root_`` 开头的名字会被解释为绝对名字。

```lean
opaque a : Nat
namespace A
  opaque a : Int
  #print _root_.a -- opaque a : Nat
  #print A.a      -- opaque A.a : Int
end A
```

上下文和上下文推测
=======================

当处理用户输入时，Lean首先将文本解析为原始表达式格式。然后，它使用背景信息和类型常量来消除重载的符号并推断隐含的参数，从而得到一个完全形成的表达式。这个过程被称为*elaboration*（细化）。

如在[表达式语法](expressions.md#expression_syntax)中所示，
表达式是根据*环境*和*局部上下文*进行解析和推理的。粗略地说，环境表示了在解析表达式时 Lean 的状态，包括先前声明的公理、常量、定义和定理。在给定的环境中，*局部上下文*由一个序列 ``(a₁ : α₁) (a₂ : α₂) ... (aₙ : αₙ)`` 组成，其中每个 ``aᵢ`` 是一个表示局部常量的名称，而每个 ``αᵢ`` 是一个类型为 ``Sort u`` 的表达式，其中 ``u`` 可以涉及环境的元素和局部常量 ``aⱼ``（其中 ``j < i``）。

直观地说，局部上下文是一个变量列表，在推导表达式时保持不变。考虑以下例子：

```lean
def f (a b : Nat) : Nat → Nat := fun c => a + (b + c)
```

在上下文中 ``(a:Nat) (b:Nat)`` 的情况下，表达式 ``fun c => a + (b + c)`` 被细化，而表达式 ``a + (b + c)`` 在上下文 ``(a:Nat) (b:Nat) (c:Nat)`` 的情况下被细化。如果你用下划线替换表达式 ``a + (b + c)``，Lean 会在错误信息中包含当前的*目标*：

```
a b c : Nat
⊢ Nat
```

在这里，“ ``a b c : Nat`` 表示局部上下文，“第二个 `Nat` 表示结果的预期类型。

上下文有时被称为把零多个变量绑定在一起的“telescope”，但后者更常用，用于包括相对于给定上下文的顺序的一系列声明。例如，相对于上下文“（a₁：α₁）（a₂：α₂）...（aₙ：αₙ）”，telescope 中的类型“βᵢ”可以引用“a₁，...，aₙ”。因此，上下文可以被视为相对于空上下文的telescope。

telescope 经常用于描述到一个声明的参数列表的参数。在这种情况下，使用“（a：α）”代替一个单个参数会更加方便。一般来说，[Implicit Arguments](expressions.md#implicit_arguments)中描述的注解可以用于标记参数是否为隐式。

.. _basic_declarations:

基本声明
==================

Lean提供了将新对象添加到环境中的方法。以下是声明新对象的直接方式：

* ``axiom c : α``: 声明一个名为 ``c`` 的类型为 ``α`` 的常量，该声明默认假设 `α` 不是一个空类型。
* ``def c : α := v``: 定义 ``c`` 为表示为 ``v`` 的对象，它的类型应为 ``α``。
* ``theorem c : p := v``: 类似于 ``def``，但是用于 ``p`` 是一个命题的情况。
* ``opaque c : α (:= v)?``: 声明一个名为 ``c`` 的类型为 ``α`` 的不透明常量，可选的值 `v` 必须具有类型 `α`，
  可以将其视为证明“α”不是一个空类型的证书。如果没有提供该值，Lean将尝试基于类型类推论找到一个值。
  值 `v` 对于类型检查器是隐藏的。可以假设在类型检查完此类声明后，Lean 会“忘记” `v`。

有时候能够模拟定义或定理而不给它命名或将其添加到环境中是很有用的。

* ``example : α := t``: Elaborate ``t`` 并检查其具有 ``α`` 类型（通常是一个命题），而无需将其添加到环境中。
在``def``中，如果Lean可以推断类型（分别为``α``或``p``），则类型可以省略。用``theorem``声明的常量被标记为``irreducible``。

``def``、``theorem``、``axiom``或``example``可以在冒号前接受一个参数列表（即上下文）。如果``(a : α)``是上下文，定义``def foo (a : α) : β := t``被解释为``def foo : (a : α) → β := fun a : α => t``。类似地，定理``theorem foo (a : α) : p := t``被解释为``theorem foo : ∀ a : α, p := fun a : α => t``。

```lean
opaque c : Nat
opaque d : Nat
axiom cd_eq : c = d

def foo : Nat := 5
def bar := 6
def baz (x y : Nat) (s : List Nat) := [x, y] ++ s

theorem foo_eq_five : foo = 5 := rfl
theorem baz_theorem (x y : Nat) : baz x y [] = [x, y] := rfl

example (x y : Nat) : baz x y [] = [x, y] := rfl
```

归纳类型
=======

Lean的公理基础允许用户声明任意的归纳类型族，按照[Dybjer]_描述的模式进行。为了使介绍更加易于理解，我们首先描述归纳*类型*，然后在下一节中描述归纳*族*的推广。声明一个归纳类型的形式如下：

```
inductive Foo (a : α) where
  | constructor₁ : (b : β₁) → Foo a
  | constructor₂ : (b : β₂) → Foo a
  ...
  | constructorₙ : (b : βₙ) → Foo a
```

在这里 ``(a : α)`` 是一个上下文，每一个 ``(b : βᵢ)`` 都是一个伴随着 ``Foo`` 的上下文 ``(a : α)`` 中的伞形组合物，满足以下约束条件。

设伞形组合物 ``(b : βᵢ)`` 是 ``(b₁ : βᵢ₁) ... (bᵤ : βᵢᵤ)``。伞形组合物中的每个参数要么是 *非递归的*，要么是 *递归的*。

- 如果参数 ``(bⱼ : βᵢⱼ)`` 是 *非递归的*，那么当 ``βᵢⱼ`` 不引用定义中的归纳类型 ``foo`` 时，它可以是任意类型，只要它不引用任何非递归参数即可。

- 如果参数 ``(bⱼ : βᵢⱼ)`` 是 *递归的*，那么当 ``βᵢⱼ`` 形如 ``Π (d : δ), foo``，其中 ``(d : δ)`` 是一个不引用 ``foo`` 或任何非递归参数的伞形组合物时。

这个归纳类型 ``foo`` 表示了一个由构造函数自由生成的类型。每个构造函数都可以接受任意的数据和事实作为参数（非递归参数），以及之前构造的 ``foo`` 元素的索引序列（递归参数）。在集合论模型中，这些集合可以用由构造函数数据标记的良好基础树表示，或者可以使用其他超限或非预言性手段定义。

上述类型 ``foo`` 的声明会导致以下常量添加到环境中：

- *类型形成器* ``foo : Π (a : α), Sort u``
- 对于每个 ``i``，*构造函数* ``foo.constructorᵢ : Π (a : α) (b : βᵢ), foo a``
- *消去器* ``foo.rec``，它接受参数：

  + ``(a : α)``（参数）
  + ``{C : foo a → Type u}``（消去的 *动机*）
  + 对于每个 ``i``，与 ``constructorᵢ`` 相对应的 *小前提*
  + ``(x : foo)``（主前提）
**LEAN定理证明的翻译**

返回元素``C x``。这里，第i个次要前提是一个函数，它接受：

+ ``(b : βᵢ)``（构造函数的参数）
+ 类型为``Π (d : δ), C (bⱼ d)``的参数，对应于每个递归参数``(bⱼ : βᵢⱼ)`'，其中``βᵢⱼ``的形式为``Π (d : δ), foo``（正在定义的函数的递归值）

并返回``C (constructorᵢ a b)``的元素，即``constructorᵢ a b``处函数的预期值。

消除子表示递归原理：要构造一个元素``C x``，其中``x : foo a``，只需考虑``x``为``constructorᵢ a b``形式的情况，并在每种情况下提供辅助构造。对于``constructorᵢ``的一些参数为递归的情况，可以假设我们已经构造了``C y``的值，其中``y``是在较早阶段构造的值。

在命题作为类型的对应关系下，当``C x``是``Prop``的元素时，消除子表示归纳原理。为了证明``∀ x, C x``，只需证明对于每个构造函数，当归纳假设为构造函数的所有递归输入都成立时，``C``成立。

消除子和构造函数满足以下等式，其中所有参数都显示出来。假设我们设置``F := foo.rec a C f₁ ... fₙ``。对于每个构造函数，我们有定义归约：



```
F (constructorᵢ a b) = fᵢ b ... (fun d : δᵢⱼ => F (bⱼ d)) ...
```

# LEAN 定理的证明

## 普通归纳法
在 Lean 中，我们使用归纳法来证明定理。归纳法的基本思想是：我们先在基础步骤上证明定理，然后在归纳步骤上证明定理的递归情况。

在 Lean 中，我们可以使用以下形式的普通归纳法进行证明：
```
induction hypothesis : P n
```
这里的 `P` 是一个谓词，`n` 是我们要证明的定理的参数。`induction hypothesis` 引入了我们的归纳假设，即假设在一个特定的情况下定理成立。

然后，我们可以使用归纳假设来进行归纳步骤的证明。在证明的过程中，我们通常需要使用定理的递归结构。

## 例子
下面是一些常见的归纳类型的示例，其中许多是在核心库中定义的。

* [自然数](https://en.wikipedia.org/wiki/Natural_number) (`Nat`)：自然数是一个数学概念，用于表示非负整数。在 Lean 中，我们可以使用归纳法证明关于自然数的定理。

* [列表](https://en.wikipedia.org/wiki/List_(abstract_data_type)) (`List`)：列表是一种有序集合，可以包含任意数量的元素。在 Lean 中，我们可以使用归纳法证明关于列表的定理。

* [布尔值](https://en.wikipedia.org/wiki/Boolean_data_type) (`Bool`)：布尔值是一种逻辑数据类型，只能取 `true` 或 `false` 两个值。在 Lean 中，我们可以使用归纳法证明关于布尔值的定理。

* [函数](https://en.wikipedia.org/wiki/Function_(mathematics)) (`Function`)：函数是一种将输入映射到输出的映射关系。在 Lean 中，我们可以使用归纳法证明关于函数的定理。

这些只是一些常见的归纳类型的例子，实际上 Lean 中有许多其他类型也可以用于归纳证明。无论是哪种类型，我们都可以使用归纳法来证明关于它们的定理。

```lean
namespace Hide
universe u v

-- BEGIN
inductive Empty : Type

inductive Unit : Type
| unit : Unit

inductive Bool : Type
| false : Bool
| true : Bool

inductive Prod (α : Type u) (β : Type v) : Type (max u v)
| mk : α → β → Prod α β

inductive Sum (α : Type u) (β : Type v)
| inl : α → Sum α β
| inr : β → Sum α β

inductive Sigma (α : Type u) (β : α → Type v)
| mk : (a : α) → β a → Sigma α β

inductive false : Prop

inductive True : Prop
| trivial : True

inductive And (p q : Prop) : Prop
| intro : p → q → And p q

inductive Or (p q : Prop) : Prop
| inl : p → Or p q
| inr : q → Or p q

inductive Exists (α : Type u) (p : α → Prop) : Prop
| intro : ∀ x : α, p x → Exists α p

inductive Subtype (α : Type u) (p : α → Prop) : Type u
| intro : ∀ x : α, p x → Subtype α p

inductive Nat : Type
| zero : Nat
| succ : Nat → Nat

inductive List (α : Type u)
| nil : List α
| cons : α → List α → List α

-- full binary tree with nodes and leaves labeled from α
inductive BinTree (α : Type u)
| leaf : α → BinTree α
| node : BinTree α → α → BinTree α → BinTree α

-- every internal node has subtrees indexed by Nat
inductive CBT (α : Type u)
| leaf : α → CBT α
| node : (Nat → CBT α) → CBT α
-- END
end Hide
```

请注意，在归纳定义 ``Foo`` 的语法中，上下文 ``(a : α)`` 是隐含的。换句话说，构造函数和递归参数被写成好像它们的返回类型是 ``Foo`` 而不是 ``Foo a``。

上下文 ``(a : α)`` 的元素可以标记为隐含，如 [隐含参数](#implicit.md#implicit_arguments) 中所述。这些注释仅影响类型构造器 ``Foo``。Lean 通过一种启发式方法来确定哪些构造函数的参数应该标记为隐含，即，如果一个参数可以从后续参数的类型中推导出来，那么它就被标记为隐含。如果构造函数之后出现了注释 ``{}``，那么如果一个参数可以从后续参数的类型或返回类型中推导出来，它就被标记为隐含。例如，让 ``nil`` 表示任意类型的空列表是有用的，因为类型通常可以在它出现的上下文中推导出来。这些启发式方法并不完美，有时您可能希望根据默认的构造函数来定义自己的构造函数。在这种情况下，使用 ``[match_pattern]`` [属性](TODO: 链接缺失) 来确保这些构造函数将被 [等式编译器](#the-equation-compiler) 适当地使用。

在类型构造器的返回类型 ``Sort u`` 中，宇宙 ``u`` 受到了一些限制。在消除器的动机的返回类型 ``Sort u`` 中，宇宙 ``u`` 也有一些限制。下一节将在更一般的归纳族中讨论这些限制。

Lean 允许一些额外的语法便利性。您可以省略类型构造器的返回类型 ``Sort u``，在这种情况下，Lean 将推断出 ``u`` 的最小可能非零值。与函数定义类似，您可以在冒号前列出构造函数的参数。在枚举类型中（即构造函数没有参数的类型），您还可以省略构造函数的返回类型。

```lean
namespace Hide
universe u

-- BEGIN
inductive Weekday
| sunday | monday | tuesday | wednesday
| thursday | friday | saturday

inductive Nat
| zero
| succ (n : Nat) : Nat

inductive List (α : Type u)
| nil : List α
| cons (a : α) (l : List α) : List α

@[match_pattern]
def List.nil' (α : Type u) : List α := List.nil

def length {α : Type u} : List α → Nat
| (List.nil' _) => 0
| (List.cons a l) => 1 + length l
-- END

end Hide
```

类型的形成、构造函数和消除子都属于Lean的公理基础，也就是说，它们是受信任的内核的一部分。除了这些公理性声明的常量之外，Lean还自动以这些对象为基础定义了一些附加对象，并将它们添加到环境中。其中包括以下内容：

- ``Foo.recOn`` ：消除子的一个变体，其主前提首先出现
- ``Foo.casesOn`` ：消除子的一个受限版本，省略了任何递归调用
- ``Foo.noConfusionType`` ，``Foo.noConfusion`` ：这些函数表明归纳类型是自由生成的，即构造函数是单射的，不同的构造函数产生不同的对象
- ``Foo.below`` ，``Foo.ibelow`` ：方程式编译器用来实现结构递归的函数
- ``instance : SizeOf Foo`` ：一种可以用于良好基础递归的度量

请注意，通常将与数据类型 ``foo`` 相关的定义和定理放在相同名称的命名空间中。这样可以使用在“结构”和“命名空间”中描述的投影符号表示法。

```lean
namespace Hide
universe u

-- BEGIN
inductive Nat
| zero
| succ (n : Nat) : Nat

#check Nat
#check @Nat.rec
#check Nat.zero
#check Nat.succ

#check @Nat.recOn
#check @Nat.casesOn
#check @Nat.noConfusionType
#check @Nat.noConfusion
#check @Nat.brecOn
#check Nat.below
#check Nat.ibelow
#check Nat._sizeOf_1

-- END

end Hide
```

.. _归纳族：

归纳族
==================

实际上，Lean 实现了对前一节描述的归纳类型的略微概括，即归纳*族*。在 Lean 中声明归纳族有以下形式：

```
inductive Foo (a : α) : Π (c : γ), Sort u
| constructor₁ : Π (b : β₁), Foo t₁
| constructor₂ : Π (b : β₂), Foo t₂
...
| constructorₙ : Π (b : βₙ), Foo tₙ
```

这里的 ``(a: α)`` 是一个上下文， ``(c: γ)`` 是上下文 ``(a: α)`` 中的一组变量，每个 ``(b: βᵢ)`` 是上下文 ``(a: α)`` 中的一组变量，加上满足以下约束条件的 ``(Foo: Π(c: γ), Sort u)`` ，每个 ``tᵢ`` 是上下文 ``(a: α) (b: βᵢ)`` 中的一组项，类型为 ``γ``。与定义单个归纳类型 ``Foo a`` 不同，我们现在定义的是一组类型为 ``Foo a c`` ，索引为 ``c: γ`` 的类型族。每个构造函数 ``constructorᵢ`` 都将其结果放在类型 ``Foo a tᵢ`` 中，它是具有索引 ``tᵢ`` 的类型族的成员。

对前一节中方案的修改是直接的。假设上下文 ``(b: βᵢ)`` 是 ``(b₁: βᵢ₁) ... (bᵤ: βᵢᵤ)``。

- 和以前一样，如果参数 ``(bⱼ: βᵢⱼ)`` 是*非递归*的，那么只要 ``βᵢⱼ`` 不涉及正在定义的归纳类型 ``Foo``，它可以是任何类型，只要它不引用任何非递归参数。

- 如果参数 ``(bⱼ: βᵢⱼ)`` 是*递归*的，那么 ``βᵢⱼ`` 的形式是 ``Π(d: δ), Foo s`` ，其中 ``(d: δ)`` 是一个无引用于 ``Foo`` 或任何非递归参数的变量组， ``s`` 是上下文 ``(a: α)`` 和前面的非递归 ``bⱼ`` 的项组成的元组，类型为 ``γ``。

这样定义类型 ``Foo`` 导致以下常量被添加到环境中：

- *类型构造器* ``Foo: Π(a: α) (c: γ), Sort u``
- 对于每个 ``i``， *构造函数* ``Foo.constructorᵢ: Π(a: α) (b: βᵢ), Foo a tᵢ``
- **消除器** ``Foo.rec``，接受参数：

  + ``(a : α)``（参数）
  + ``{C : Π (c : γ), Foo a c → Type u}``（消除的动机）
  + 对于每个``i``，与``constructorᵢ``对应的小前提
  + ``(x : Foo a)``（主前提）

  并返回``C x``的一个元素。这里，第``i``个小前提是一个函数，接受：

  + ``(b : βᵢ)``（构造函数的参数）
  + 一个类型为``Π (d : δ), C s (bⱼ d)``的参数，对应每个递归参数``(bⱼ : βᵢⱼ)``，其中``βᵢⱼ``的形式为``Π (d : δ), Foo s``

  并返回``C tᵢ (constructorᵢ a b)``的一个元素。

假设我们设置``F := Foo.rec a C f₁ ... fₙ``。那么对于每个构造函数，我们有如上所述的定义性缩减：

```
F (constructorᵢ a b) = fᵢ b ... (fun d : δᵢⱼ => F (bⱼ d)) ...
```

其中省略号表示递归参数的每个条目。

以下是归纳族的示例。

```lean
namespace Hide
universe u

-- BEGIN
inductive Vector (α : Type u) : Nat → Type u
| nil  : Vector 0
| succ : Π n, Vector n → Vector (n + 1)

-- 'IsProd s n' means n is a product of elements of s
inductive IsProd (s : Set Nat) : Nat → Prop
| base : ∀ n ∈ s, IsProd n
| step : ∀ m n, IsProd m → IsProd n → IsProd (m * n)

inductive Eq {α : Sort u} (a : α) : α → Prop
| refl : Eq a
-- END

end Hide
```

我们现在可以描述类型π的返回类型的约束，``Sort u``。我们总是可以将u取为0，这样我们就定义了一族归纳命题。然而，如果u不为零，则必须满足以下约束：对于在构造函数中出现的每个类型``βᵢⱼ : Sort v``，我们必须有``u ≥ v``。在集合论解释中，这确保了结果类型所在的宇宙足够大，可以包含通过归纳生成的族，考虑到不同标记的构造函数的数量。这个限制不适用于归纳定义的命题，因为它们不包含数据。

然而，将归纳族放入“Prop”中对消除器施加了限制。一般来说，对于“Prop”中的归纳族，消除器中的动机必须是“Prop”。但是这个规则有一个例外：当只有一个构造函数，并且该构造函数的每个参数要么在“Prop”中，要么是一个指数时，允许从归纳定义的“Prop”中消除到任意的“Sort”。直观上讲，在这种情况下，消除操作并不使用任何除了类型参数被占用这一事实以外的信息。这种特殊情况被称为*singleton elimination*（单例消除）。

相互和嵌套归纳定义
=================

Lean支持上述归纳族的两个推广，即相互和嵌套归纳定义。它们*不*是在内核中原生实现的。相反，这些定义被编译成基本归纳类型和族。

第一个推广允许同时定义多个归纳类型。

```
mutual

inductive Foo (a : α) : Π (c : γ₁), Sort u
| constructor₁₁ : Π (b : β₁₁), Foo a t₁₁
| constructor₁₂ : Π (b : β₁₂), Foo a t₁₂
...
| constructor₁ₙ : Π (b : β₁ₙ), Foo a t₁ₙ

inductive Bar (a : α) : Π (c : γ₂), Sort u
| constructor₂₁ : Π (b : β₂₁), Bar a t₂₁
| constructor₂₂ : Π (b : β₂₂), Bar a t₂₂
...
| constructor₂ₘ : Π (b : β₂ₘ), Bar a t₂ₘ

end
```

这里展示了定义两个归纳数据族 ``Foo`` 和 ``Bar`` 的语法，但允许定义任意数量的数据族。其限制几乎与普通的归纳数据族相同。例如，每一个 ``(b : βᵢⱼ)`` 都是相对于上下文 ``(a : α)`` 的一组变量。不同之处在于，构造子现在可以有递归参数，其返回类型可以是任何当前正在定义的归纳数据族，比如本例中的 ``Foo`` 和 ``Bar``。请注意，所有归纳定义共享相同的参数 ``(a : α)``，尽管它们可能具有不同的索引。

相互归纳定义使用额外的有限值索引将其编译为普通的归纳定义，以区分其组件。内部构造的细节主要对大多数用户隐藏。Lean 定义了预期的类型组合器 ``Foo`` 和构造子 ``constructorᵢⱼ``，从内部归纳定义中生成。然而，它没有直接的消去原则。相反，Lean 定义了一个合适的 ``sizeOf`` 尺寸衡量函数，用于与良基递归一起使用，具有递归参数到构造值的尺寸更小的性质。

第二个一般化放宽了在递归定义的 ``Foo`` 中，``Foo`` 在其任何递归参数的类型中只能严格地出现在正位置的限制。具体来说，在嵌套的归纳定义中，只要相应的参数在 *那个* 归纳类型的构造子中严格地出现在正位置，``Foo`` 就可以作为另一个归纳类型构造子的参数出现。这个过程可以迭代，因此可以将额外的类型构造子应用于那些类型上，以此类推。

嵌套归纳定义使用互相依赖的归纳定义将它编译为普通的归纳定义，同时定义所有嵌套类型的副本。然后，Lean 构造了相互定义的嵌套类型和它们独立定义的对应类型之间的同构。再次强调，内部细节不应被用户操作。而类型构造器和构造子将可用并按预期工作，同时为使用良基递归生成适当的 ``sizeOf`` 尺寸衡量函数。

```lean
universe u
-- BEGIN
mutual
inductive Even : Nat → Prop
| even_zero : Even 0
| even_succ : ∀ n, Odd n → Even (n + 1)
inductive Odd : Nat → Prop
| odd_succ : ∀ n, Even n → Odd (n + 1)
end

inductive Tree (α : Type u)
| mk : α → List (Tree α) → Tree α

inductive DoubleTree (α : Type u)
| mk : α → List (DoubleTree α) × List (DoubleTree α) → DoubleTree α
-- END
```

.. _方程编译器：

方程编译器
=====================

方程编译器可以接受一个函数或证明的方程描述，并尝试定义一个满足该规范的对象。它期望的输入具有以下语法：

```
def foo (a : α) : Π (b : β), γ
| [patterns₁] => t₁
...
| [patternsₙ] => tₙ
```

这里 ``(a : α)`` 是一个望远镜，``(b : β)`` 是在上下文 ``(a : α)`` 中的一个望远镜，而 ``γ`` 是在上下文 ``(a : α) (b : β)`` 中表示一个``Type``或``Prop``的表达式。

每个``patternsᵢ``是一系列与``(b : β)``长度相同的模式。一个模式可以是：

- 一个变量，表示相应类型的任意值，
- 一个下划线，表示*通配符*或*匿名变量*，
- 一个不可访问的项（见下文），或
- 一个应用于一系列模式的归纳类型的构造器。

在最后一种情况下，模式必须用括号括起来。

每个``tᵢ``是在上下文 ``(a : α)`` 和位于``=>``标记左侧的变量中介绍的变量一起的表达式。项``tᵢ``还可以包括对 ``foo`` 的递归调用，如下所述。方程编译器在需要匹配模式时对变量 ``(b : β)`` 进行了案例分析，并定义了``foo``，使其在每个情况下都具有值``tᵢ``。在理想情况下（见下文），这些方程是定义性的。无论它们是定义性的还是命题性的，方程编译器都证明了相关方程，并为它们分配了内部名称。它们可以通过“rewrite”和“simp”策略在名称“foo”下访问（参见[Rewrite](tactics.md#rewrite)和_[TODO：simplifier策略的文档在哪里？]_）。如果一些模式重叠，方程编译器解释定义，以便在每种情况下都适用第一个匹配模式。因此，如果最后一个模式是一个变量，则覆盖了所有剩余的情况。如果给出的模式未覆盖所有可能的情况，方程编译器会引发错误。

当使用``[match_pattern]``属性标记标识符时，方程编译器展开它们，希望暴露一个构造函数。例如，这使得在模式中可以写``n+1``和``0``，而不是``Nat.succ n``和``Nat.zero``。

对于不涉及案例分支的非递归定义，定义的方程将是定义性的。对于像 ``Char``、``String`` 和 ``Fin n`` 这样的归纳类型，案例分支会产生具有过多情况的定义。为了避免这种情况，方程编译器在定义函数时使用``if ... then ... else``而不是``casesOn``。在这种情况下，定义的方程也是定义性的。

```lean
open Nat

def sub2 : Nat → Nat
| zero          => 0
| succ zero     => 0
| succ (succ a) => a

def bar : Nat → List Nat → Bool → Nat
| 0,   _,      false => 0
| 0,   b :: _, _     => b
| 0,   [],     true  => 7
| a+1, [],     false => a
| a+1, [],     true  => a + 1
| a+1, b :: _, _     => a + b

def baz : Char → Nat
| 'A' => 1
| 'B' => 2
| _   => 3
```

如果上面模板中的任何一个项 ``tᵢ`` 包含对 ``foo`` 的递归调用，那么方程编译器会尝试将该定义解释为结构递归。为了使其成功，递归参数必须是左侧对应参数的子项。然后使用 *值序列* 递归来定义该函数，使用自动生成的函数 ``below`` 和 ``brec`` 来对应递归参数的归纳类型命名空间中。在这种情况下，定义方程在定义上是恒等的，可能需要额外的情况拆分。

```lean
namespace Hide

-- BEGIN
def fib : Nat → Nat
| 0     => 1
| 1     => 1
| (n+2) => fib (n+1) + fib n

def append {α : Type} : List α → List α → List α
| [],   l => l
| h::t, l => h :: append t l

example : append [(1 : Nat), 2, 3] [4, 5] = [1, 2, 3, 4, 5] => rfl
-- END

end Hide
```

如果结构递归失败，等式编译器会退而求其次，采用良基递归。它尝试为每个参数的类型推断出一个``SizeOf``实例，然后展示每次递归调用在``sizeOf``度量下相对于参数的词典序是递减的。如果失败，错误消息会提供关于 Lean 尝试证明的目标的信息。Lean 使用局部上下文中的信息，因此在定义体中经常可以使用``have``手动提供相关证明。在这种良基递归的情况下，定义的等式仅在命题层面成立，并且可以使用名称``foo``和``simp``、``rewrite``访问。

```lean
namespace Hide
open Nat

-- BEGIN
def div : Nat → Nat → Nat
| x, y =>
  if h : 0 < y ∧ y ≤ x then
    have : x - y < x :=
      sub_lt (Nat.lt_of_lt_of_le h.left h.right) h.left
    div (x - y) y + 1
  else
    0

example (x y : Nat) :
  div x y = if 0 < y ∧ y ≤ x then div (x - y) y + 1 else 0 :=
by rw [div]; rfl
-- END

end Hide
```

请注意，通常递归定义可能需要对上述模板中``foo``的不同参数进行嵌套递归。方程编译器通过对后续参数进行抽象，并递归定义高阶函数来满足规范要求。

方程编译器还允许相互递归定义，其语法与[相互和嵌套归纳定义](#mutual-and-nested-inductive-definitions)类似。它们使用井然有序的递归进行编译，因此再次定义的方程仅在命题上成立。

```lean
mutual
def even : Nat → Bool
| 0   => true
| a+1 => odd a
def odd : Nat → Bool
| 0   => false
| a+1 => even a
end

example (a : Nat) : even (a + 1) = odd a :=
by simp [even]

example (a : Nat) : odd (a + 1) = even a :=
by simp [odd]
```

良基递归在【相互和嵌套归纳定义】(#mutual-and-nested-inductive-definitions)中特别有用，因为它提供了在这些类型上定义函数的规范方式。

```lean
mutual
inductive Even : Nat → Prop
| even_zero : Even 0
| even_succ : ∀ n, Odd n → Even (n + 1)
inductive Odd : Nat → Prop
| odd_succ : ∀ n, Even n → Odd (n + 1)
end

open Even Odd

theorem not_odd_zero : ¬ Odd 0 := fun x => nomatch x

mutual
theorem even_of_odd_succ : ∀ n, Odd (n + 1) → Even n
| _, odd_succ n h => h
theorem odd_of_even_succ : ∀ n, Even (n + 1) → Odd n
| _, even_succ n h => h
end

inductive Term
| const : String → Term
| app   : String → List Term → Term

open Term

mutual
def num_consts : Term → Nat
| .const n  => 1
| .app n ts => num_consts_lst ts
def num_consts_lst : List Term → Nat
| []    => 0
| t::ts => num_consts t + num_consts_lst ts
end
```

在匹配的模式是针对一个归纳族类型的参数时，我们称之为 *依赖模式匹配*。这种情况相对复杂，因为被定义的函数的类型可能对匹配的模式施加约束。在这种情况下，等式编译器将检测到不一致的情况并予以排除。

```lean
universe u

inductive Vector (α : Type u) : Nat → Type u
| nil  : Vector α 0
| cons : α → Vector α n → Vector α (n+1)

namespace Vector

def head {α : Type} : Vector α (n+1) → α
| cons h t => h

def tail {α : Type} : Vector α (n+1) → Vector α n
| cons h t => t

def map {α β γ : Type} (f : α → β → γ) :
  ∀ {n}, Vector α n → Vector β n → Vector γ n
| 0,   nil,       nil       => nil
| n+1, cons a va, cons b vb => cons (f a b) (map f va vb)

end Vector
```

匹配表达式
=================

Lean 支持 ``match ... with ...`` 结构，类似于大多数函数式编程语言中的一种结构。其语法如下所示：

```
match t₁, ..., tₙ with
| p₁₁, ..., p₁ₙ => s₁
...
| pₘ₁, ..., pₘₙ => sₘ
```

这里的 ``t₁, ..., tₙ`` 是表达式出现的上下文中的任意项，表达式 ``pᵢⱼ`` 是模式，而项 ``sᵢ`` 则是局部上下文中的表达式以及模式左侧引入的变量。每个 ``sᵢ`` 都应该具有整个 ``match`` 表达式的预期类型。

任何 ``match`` 表达式都是使用等式编译器解释的，等式编译器对 ``t₁, ..., tₙ`` 进行泛化，定义满足规范的内部函数，并将其应用于 ``t₁, ..., tₙ``。与 [等式编译器](declarations.md#the-equation-compiler) 中的定义不同，这里的项 ``tᵢ`` 是任意项而不仅仅是变量，并且该表达式可以出现在 Lean 表达式的任何位置，而不仅仅是在定义的顶层。请注意，这里的语法有些不同：项 ``tᵢ`` 和模式 ``pᵢⱼ`` 都是用逗号分隔的。

```lean
def foo (n : Nat) (b c : Bool) :=
5 + match n - 5, b && c with
    | 0,   true  => 0
    | m+1, true  => m + 7
    | 0,   false => 5
    | m+1, false => m + 3
```

当 ``match`` 只有一行时，Lean 提供了使用解构 ``let`` 和解构 lambda 抽象的备选语法。因此，下面的定义都有相同的效果。

```lean
def foo : ℕ → ℕ → ℕ
| x y := x + y

def foo : ℕ → ℕ → ℕ :=
λ x y, x + y

def foo (x y : ℕ) : ℕ :=
x + y
```

这些定义都是将两个自然数相加的函数。

```lean
def bar₁ : Nat × Nat → Nat
| (m, n) => m + n

def bar₂ (p : Nat × Nat) : Nat :=
match p with | (m, n) => m + n

def bar₃ : Nat × Nat → Nat :=
fun ⟨m, n⟩ => m + n

def bar₄ (p : Nat × Nat) : Nat :=
let ⟨m, n⟩ := p; m + n
```

可以使用语法`match h : t with`在每个分支中保存匹配的项的信息。例如，用户可能想要匹配一个项`ns ++ ms: List Nat`，同时在相应的匹配分支中跟踪假设`ns ++ ms = []`或`ns ++ ms = h :: t`：

```lean
def foo (ns ms : List Nat) (h1 : ns ++ ms ≠ []) (k : Nat -> Char) : Char :=
  match h2 : ns ++ ms with
  -- in this arm, we have the hypothesis `h2 : ns ++ ms = []`
  | [] => absurd h2 h1
  -- in this arm, we have the hypothesis `h2 : ns ++ ms = h :: t`
  | h :: t => k h

-- '7'
#eval foo [7, 8, 9] [] (by decide) Nat.digitChar
```

.. _结构体和记录：

结构体和记录
======================

在 Lean 中，``structure`` 命令用于定义具有单个构造函数的归纳数据类型，并同时定义它的投射函数。其语法如下：

```
structure Foo (a : α) extends Bar, Baz : Sort u :=
constructor :: (field₁ : β₁) ... (fieldₙ : βₙ)
```

这里的 ``(a : α)`` 是一个 telescope，也就是归纳定义中的参数。``constructor`` 后面的双冒号是可选的；如果没有提供，则默认使用名字 ``mk``。关键字 ``extends`` 后面跟着一个先前定义的结构的列表也是可选的；如果存在，每个这些结构的实例都会被包含在 ``Foo`` 的字段中，而类型 ``βᵢ`` 也可以引用它们的字段。输出类型 ``Sort u`` 可以省略，在这种情况下，Lean 会推断出最小的非 ``Prop`` sort。最后，``(field₁ : β₁) ... (fieldₙ : βₙ)`` 是相对于 ``(a : α)``、以及 ``bar`` 和 ``baz`` 中的字段的 telescope。

上面的声明是对一个归纳类型声明的语法糖，所以会在环境中添加以下常量：

- 类型构造器：``Foo : Π (a : α), Sort u``
- 单个构造器：

```
Foo.constructor : Π (a : α) (toBar : Bar) (toBaz : Baz)
  (field₁ : β₁) ... (fieldₙ : βₙ), Foo a
```

# Lean定理证明

在Lean中，对于具有该构造函数的归纳类型，定义了消除器“Foo.rec”。

此外，Lean定义了以下内容：

- 投影函数：对于每个“i”，“fieldᵢ：Π（a：α）（c：Foo）：βᵢ”，其中“βᵢ”中提到的任何其他字段都由“c”中的相关投影替换。

给定“c：Foo”，Lean为投影“Foo.fieldᵢ c”提供了以下便捷语法：

- *匿名投影*：``c.fieldᵢ``
- *编号投影*：``c.i``

这些可以在Lean可以推断出“c”的类型形式为“Foo a”的任何情况下使用。匿名投影的约定适用于在命名空间“Foo”中定义的任何函数“f”，如[命名空间](namespaces.md)中所述。

同样，对于构造“Foo”的元素，Lean提供了以下便捷语法。它们与“Foo.constructor b₁ b₂ f₁ f₁ ... fₙ”等价，其中“b₁：Bar”，“b₂：Baz”，每个“fᵢ：βᵢ”：

- *匿名构造器*：``⟨b₁，b₂，f₁，...，fₙ⟩``
- *记录表示法*：

```
{ toBar := b₁, toBaz := b₂, field₁ := f₁, ...,
    fieldₙ := fₙ :  Foo a }
```

匿名构造函数可以在任何上下文中使用，在这些上下文中 Lean 可以推断出表达式应具有 ``Foo a`` 形式的类型。Unicode 括号分别输入为 ``\<`` 和 ``\>``。

在使用记录表示法时，当 Lean 可以推断出表达式应具有 ``Foo a`` 形式的类型时，可以省略注释 ``: Foo a``。你可以将 ``toBar`` 或 ``toBaz`` 中的任一项替换为对它们的字段的赋值，这相当于将 ``Bar`` 和 ``Baz`` 的字段直接导入到 ``Foo`` 中。最后，记录表示法还支持

- *记录更新*：``{ t with ... fieldᵢ := fᵢ ...}``

这里的 ``t`` 是类型为 ``Foo a`` 的术语，其中 ``a`` 是某个类型。这个表示法告诉 Lean 在省略了列表中的任何字段赋值时，从 ``t`` 中获取值。

Lean 还允许你为结构中的任何字段指定默认值，方法是写上 ``(fieldᵢ : βᵢ := t)``。这里的 ``t`` 指定了在记录表示法的实例中未指定字段 ``fieldᵢ`` 时要使用的值。

```lean
universe u v

structure Vec (α : Type u) (n : Nat) :=
(l : List α) (h : l.length = n)

structure Foo (α : Type u) (β : Nat → Type v) : Type (max u v) :=
(a : α) (n : Nat) (b : β n)

structure Bar :=
(c : Nat := 8) (d : Nat)

structure Baz extends Foo Nat (Vec Nat), Bar :=
(v : Vec Nat n)

#check Foo
#check @Foo.mk
#check @Foo.rec

#check Foo.a
#check Foo.n
#check Foo.b

#check Baz
#check @Baz.mk
#check @Baz.rec

#check Baz.toFoo
#check Baz.toBar
#check Baz.v

def bzz := Vec.mk [1, 2, 3] rfl

#check Vec.l bzz
#check Vec.h bzz
#check bzz.l
#check bzz.h
#check bzz.1
#check bzz.2

example : Vec Nat 3 := Vec.mk [1, 2, 3] rfl
example : Vec Nat 3 := ⟨[1, 2, 3], rfl⟩
example : Vec Nat 3 := { l := [1, 2, 3], h := rfl : Vec Nat 3 }
example : Vec Nat 3 := { l := [1, 2, 3], h := rfl }

example : Foo Nat (Vec Nat) := ⟨1, 3, bzz⟩

example : Baz := ⟨⟨1, 3, bzz⟩, ⟨5, 7⟩, bzz⟩
example : Baz := { a := 1, n := 3, b := bzz, c := 5, d := 7, v := bzz}
def fzz : Foo Nat (Vec Nat) := {a := 1, n := 3, b := bzz}

example : Foo Nat (Vec Nat) := { fzz with a := 7 }
example : Baz := { fzz with c := 5, d := 7, v := bzz }

example : Bar := { c := 8, d := 9 }
example : Bar := { d := 9 }  -- uses the default value for c
```

# 类型类

## 类和实例
在函数式编程中，类型类是一种用于定义通用行为的机制。它允许我们定义一组函数或操作，并对多个类型的实例进行相同的操作。可以将类型类看作是一组相关函数的接口。

与传统的面向对象编程不同，类型类并不直接与数据类型相关联。相反，它允许我们在任何数据类型上实现相同的操作，并将其视为类型类的实例。

要创建一个类型类，我们需要定义一组函数及其对应的类型约束。类型约束指定了哪些类型可以成为类型类的实例。通过实现这些函数的不同实例，我们可以为不同的类型创建类型类的实例。

```Haskell
class Show a where
    show :: a -> String
```

在上面的示例中，我们定义了一个类型类 `Show`。它包含一个函数 `show`，该函数将某个类型的实例转换为字符串。要成为 `Show` 类的实例，我们需要在类型声明中包含对应的类型约束。

```Haskell
data Person = Person { name :: String, age :: Int }

instance Show Person where
    show (Person name age) = "Person { name = " ++ name ++ ", age = " ++ show age ++ " }"
```

在上面的示例中，我们为 `Person` 类型定义了一个 `Show` 类的实例。我们实现了 `show` 函数，以便将 `Person` 类型的实例转换为字符串。

通过这种方式，我们可以为其他类型创建自己的 `Show` 类实例。

## 匿名实例
有时，我们希望在不为类型定义具体的实例名称的情况下，创建类型类的实例。这种情况下，我们可以使用匿名实例。匿名实例允许我们在定义函数时，直接为特定类型创建类型类的实例。

```Haskell
printPerson :: Show a => a -> IO ()
printPerson person = putStrLn (show person)
```

在上面的示例中，我们定义了一个函数 `printPerson`，它将任何类型为 `Show` 类的实例作为参数，并将其转换为字符串后打印出来。

我们不需要为该函数定义实例，因为它是在函数中根据类型约束直接创建的。

## 本地实例
有时，我们可能只想在特定的作用域中创建类型类的实例。这种情况下，我们可以使用本地实例。本地实例是指仅在特定作用域内可见的类型类实例。

使用本地实例的常见方式是通过 `instance` 关键字在函数内部定义。这允许我们在需要的时候为特定函数或代码块定义类型类的实例。

```Haskell
print :: Show a => a -> IO ()
print value = putStrLn (show value)

example = let
    instance Show Int where
        show n = "number: " ++ show n
    in do
        print (5 :: Int)
```

在上面的示例中，我们定义了一个本地实例，它将 `Int` 类型的实例转换为自定义的字符串表示形式。我们使用这个实例来调用函数 `print`，并在程序中打印出结果。

本地实例使我们能够在不更改全局实例的情况下，为特定的函数或代码块创建类型类的实例。

## 参考文献
Dybjer, Peter. "Inductive Families". *Formal Aspects of Computing*, vol. 6, 1994, pp. 440-465.