表达式
===========

Lean 中的每个表达式都有一个 [类型](types.md)。每个类型也是类型为 `Sort u` 的表达式，其中 u 是某个宇宙级别。参见 [类型宇宙](types.md#类型宇宙)。

表达式语法
=============

Lean 中的表达式定义如下：

* ``Sort u``：宇宙级别为 ``u`` 的类型宇宙
* ``c``：其中 ``c`` 是指代已声明的常量或已定义对象的标识符
* ``x``：其中 ``x`` 是表达式解析的局部上下文中的变量
* `m?`：其中 `m?` 是在表达式解析的 metavariable 上下文中的 metavariable，你可以将 metavariable 视为尚未合成的“空洞”
* ``(x : α) → β``：将 ``α`` 的元素 ``x`` 映射到类型为``Sort``的表达式 ``β`` 的函数类型，其中 ``β`` 是一个表达式
* ``s t``：将 ``s`` 应用到 ``t`` 的结果，其中 ``s`` 和 ``t`` 是表达式
* ``fun x : α => t`` 或 `λ x : α => t`：将类型为 ``α`` 的任何值 ``x`` 映射到 ``t`` 的函数，其中 ``t`` 是一个表达式
* ``let x := t; s``：局部定义，表示将 ``x`` 替换为 ``t`` 时 ``s`` 的值
* `s.i`：投影，表示 `s` 的第 `i` 个字段的值
* `lit`：自然数或字符串字面量
* `mdata k s`：将表达式 `s` 用元数据 `k` 进行装饰，其中 `k` 是一个键值映射

每个在 Lean 中形成良好的术语都有一个*类型*，它本身是某些 ``u`` 的类型为 ``Sort u`` 的表达式。术语 ``t`` 具有类型 ``α`` 的事实用 ``t : α`` 来表示。

为了使一个表达式形成良好，其组成部分必须满足一定的类型约束。这些约束进一步确定了结果术语的类型，如下所示：

* ``Sort u : Sort (u + 1)``
* ``c : α``，其中 ``α`` 是已声明或定义的 ``c`` 的类型
* `x: α`，其中 `α` 是 `x` 在其所在的局部上下文中分配的类型。
* `?m: α`，其中 `α` 是在 `?m` 所在的 metavariable 上下文中声明的类型。
* `(x: α) → β: Sort(imax u v)`，其中 `α: Sort u`，`β: Sort v` 假设 `x: α`。
* `s t: β[t/x]`，其中 `s` 的类型为 `(x: α) → β`，`t` 的类型为 `α`。
* 若 `t` 的类型为 `β`，且 `x` 的类型为 `α`，则 `(fun x: α => t): (x: α) → β`。
* `(let x := t; s): β[t/x]`，其中 `t` 的类型为 `α`，`s` 的类型为 `β`，假设 `x: α`。
* 若 `lit` 是一个数字， 则 `lit: Nat`。
* 若 `lit` 是一个字符串字面值， 则 `lit: String`。
* 若 `s: α`，则 `mdata k s: α`。
* 若 `s: β`，且 `β` 是一个只有一个构造函数的归纳数据类型，且第 `i` 个字段的类型为 `α`，则 `s.i: α`。

``Prop`` 缩写为 ``Sort 0``，``Type`` 缩写为 ``Sort 1``，且当 `u` 是一个宇宙变量时，``Type u`` 缩写为 ``Sort (u + 1)``。我们说“`α` 是一个类型”来表示对于某个 `u`，``α: Type u``，我们说“`p` 是一个命题”来表示 ``p: Prop``。根据“命题即类型”对应关系，给定 ``p: Prop``，我们将表达式 ``t: p`` 称为 ``p`` 的一个证明。相反地，给定 `α: Type u` 和 `t: α`，有时我们将 `t` 称为数据。

当 `(x: α) → β` 中的表达式 `β` 不依赖于 `x` 时，可以写为 `α → β`。通常情况下，变量 `x` 被绑定在上下文中。
以下是对 LEAN 定理证明文章的翻译：

(x : α) →  β 表示一个类型为 α 的参数 x，返回类型为 β 的函数。它可以用来定义函数 fun x : α => t，其中 t 是表达式。也可以使用 let x := t; s 的形式来定义一个名为 x 的变量，并将 t 赋值给它，然后对 s 进行处理。

∀ x : α, β 是 (x : α) →  β 的一种替代语法，通常在 β 是命题时使用。可以使用下划线作为绑定器中的内部变量，例如 fun _ : α => t。

在构建项的过程中，使用临时占位符 *Metavariables*。添加到环境中的项既不包含 metavariable 也不包含变量，即它们是完全解析的，在空上下文中是有意义的。

可以使用关键字 axiom 声明公理。类似地，对象可以以多种方式进行定义，例如使用 def 和 theorem 关键字。更多信息请参见[declarations.md](./declarations.md)章节。

写出表达式 ``(t : α)`` 强制 Lean 对 t 进行解析，使其具有类型 α，如果解析失败，则报告错误。

Lean 支持匿名构造符号、匿名投影和各种形式的匹配语法，包括解构 fun 和 let。这些内容，以及常见数据类型（如对、列表等）的符号，将在与归纳类型相关的[declarations.md](./declarations.md)章节中讨论。

```lean
universe u

#check Sort 0
#check Prop
#check Sort 1
#check Type
#check Sort u
#check Sort (u+1)

#check Nat → Bool
#check (α : Type u) → List α
#check (α : Type u) → (β : Type u) → Sum α β
#check fun x : Nat => x
#check fun (α : Type u) (x : α) => x
#check let x := 5; x * 2
#check "hello"
#check (fun x => x) true
```

隐式参数
==================

在 Lean 中声明定义对象的参数时（例如使用``def``、``theorem``、``axiom``、``constant``、``inductive``或``structure``；参见 [章节声明](./declarations.md)）或在章节中声明变量时（参见 [其他命令](./other_commands.md)），参数可以被注释为*显式*或*隐式*。这决定了包含该对象的表达式的解释方式。

* ``(x : α)``：类型为``α``的显式参数
* ``{x : α}``：隐式参数，将被敏捷地插入
* ``⦃x : α⦄``或``{{x : α}}``：隐式参数，将被弱插入
* ``[x : α]``：通过类型类解析来推断的隐式参数
* ``(x : α := v)``：可选参数，具有默认值``v``
* ``(x : α := by tac)``：通过策略``tac``来合成的隐式参数

类解析参数的变量名可以省略，在这种情况下，将生成一个内部名称。

当一个函数有一个显式参数时，你仍然可以要求 Lean 的解析器自动推断该参数，方法是将其输入为下划线（``_``）。相反，编写``@foo``表示要显式给出所有传递给``foo``的参数，而不考虑``foo``的声明方式。你还可以使用命名参数为隐式参数提供值。命名参数使你可以通过与参数的名称匹配而不是与参数列表中的位置匹配来为参数指定参数。如果你不记得参数的顺序但知道它们的名称，你可以以任何顺序发送参数。你还可以在 Lean 无法推断出隐式参数的情况下提供隐式参数的值。命名参数还可以提高代码的可读性，标识出每个参数代表的内容。

```lean
def add (x y : Nat) : Nat :=
  x + y

#check add 2 3 -- Nat
#eval add 2 3  -- 5

def id1 (α : Type u) (x : α) : α := x

#check id1 Nat 3
#check id1 _ 3

def id2 {α : Type u} (x : α) : α := x

#check id2 3
#check @id2 Nat 3
#check id2 (α := Nat) 3
#check id2
#check id2 (α := Nat)

def id3 {{α : Type u}} (x : α) : α := x

#check id3 3
#check @id3 Nat 3
#check (id3 : (α : Type) → α → α)

class Cls where
  val : Nat

instance Cls_five : Cls where
  val := 5

def ex2 [c : Cls] : Nat := c.val

example : ex2 = 5 := rfl

def ex2a [Cls] : Nat := ex2

example : ex2a = 5 := rfl

def ex3 (x : Nat := 5) := x

#check ex3 2
#check ex3

example : ex3 = 5 := rfl

def ex4 (x : Nat) (y : Nat := x) : Nat :=
  x * y

example : ex4 x = x * x :=
  rfl
```

基本数据类型和断言
===========================

核心库包含许多基本数据类型，例如自然数（`Nat`），整数（`Int`），布尔值（``Bool``），以及对它们的常见操作，以及通常的逻辑量词和连接词。下面给出一些例子。常见符号及其优先级的列表可以在[该文件](https://github.com/leanprover/lean4/blob/master/src/Init/Notation.lean)中找到，其中包含在核心库中。核心库还包含一些基本数据类型的构造器。定义还可以在核心库的[Data](https://github.com/leanprover/lean4/blob/master/src/Init/Data)目录中找到。更多信息请参见[章节库](./libraries.md)。

```
/- numbers -/
def f1 (a b c : Nat) : Nat :=
  a^2 + b^2 + c^2

def p1 (a b c d : Nat) : Prop :=
  (a + b)^c ≤ d

def p2 (i j k : Int) : Prop :=
  i % (j * k) = 0


/- booleans -/

def f2 (a b c : Bool) : Bool :=
  a && (b || c)

/- pairs -/

#eval (1, 2)

def p : Nat × Bool := (1, false)

section
variable (a b c : Nat) (p : Nat × bool)

#check (1, 2)
#check p.1 * 2
#check p.2 && tt
#check ((1, 2, 3) : Nat × Nat × Nat)
end

/- lists -/
section
variable x y z : Nat
variable xs ys zs : list Nat
open list

#check (1 :: xs) ++ (y :: zs) ++ [1,2,3]
#check append (cons 1 xs) (cons y zs)
#check map (λ x, x^2) [1, 2, 3]
end

/- sets -/
section
variable s t u : set Nat

#check ({1, 2, 3} ∩ s) ∪ ({x | x < 7} ∩ t)
end

/- strings and characters -/
#check "hello world"
#check 'a'

/- assertions -/
#check ∀ a b c n : Nat,
  a ≠ 0 ∧ b ≠ 0 ∧ c ≠ 0 ∧ n > 2 → a^n + b^n ≠ c^n

def unbounded (f : Nat → Nat) : Prop := ∀ M, ∃ n, f n ≥ M
```

构造函数、投影和模式匹配
===========================

Lean的基础是*归纳构造演算*，它支持*归纳类型*的声明。这种类型可以有任意数量的*构造函数*，以及一个相关的*消除子*（或*递归子*）。只有一个构造函数的归纳类型称为*结构*，它们具有*投影*。归纳类型的完整语法在[声明](declarations.md)中描述，但这里我们描述一些语法元素，以便更方便地在表达式中使用它们。

当Lean能够推断出一个表达式的类型，并且它是一个具有一个构造函数的归纳类型时，那么我们可以写成 ``⟨a1, a2, ..., an⟩`` 来应用构造函数而无需给其命名。例如，在上下文中该表达式可以推断为一个对时，``⟨a, b⟩`` 表示 ``prod.mk a b``，而在上下文中该表达式可以推断为一个合取时， ``⟨h₁, h₂⟩`` 表示 ``and.intro h₁ h₂``。这种记法会自动嵌套构造，所以当期望的表达式类型是 ``α1 × α2 × α3`` 形式时，``⟨a1, a2, a3⟩`` 被解释为 ``prod.mk a1 (prod.mk a2 a3)``。（后者被解释为 ``α1 × (α2 × α3)``，因为积从右到左结合。）

类似地，我们可以使用点表示法来表示投影：当Lean能够推断出 ``p`` 是一个元素的乘积时，可以写作 ``p.fst`` 和 ``p.snd`` 来表示 ``prod.fst p`` 和 ``prod.snd p``，当 ``h`` 是一个合取时，可以写作 ``h.left`` 和 ``h.right`` 来表示 ``and.left h`` 和 ``and.right h``。

对于在*命名空间*中定义的任何对象，也可以使用匿名投影符号。例如，如果 ``l`` 的类型是 ``list α``，那么 ``l.map f`` 简写为 ``list.map f l``，其中 ``l`` 被放置在 ``list.map`` 期望一个 ``list`` 的第一个参数位置上。

最后，对于只有一个构造函数的数据类型，可以使用 "let" 和 "assume" 结构进行模式匹配来析构元素，如下面的例子所示。在内部，这些被解释为使用“match”结构，这又会编译为归纳类型的消除子，如 [声明](declarations.md)中所述。
``` lean
universes u v
variable {α : Type u} {β : Type v}

def p : Nat × ℤ := ⟨1, 2⟩
#check p.fst
#check p.snd

def p' : Nat × ℤ × bool := ⟨1, 2, tt⟩
#check p'.fst
#check p'.snd.fst
#check p'.snd.snd

def swap_pair (p : α × β) : β × α :=
⟨p.snd, p.fst⟩

theorem swap_conj {a b : Prop} (h : a ∧ b) : b ∧ a :=
⟨h.right, h.left⟩

#check [1, 2, 3].append [2, 3, 4]
#check [1, 2, 3].map (λ x, x^2)

example (p q : Prop) : p ∧ q → q ∧ p :=
λ h, ⟨h.right, h.left⟩

def swap_pair' (p : α × β) : β × α :=
let (x, y) := p in (y, x)

theorem swap_conj' {a b : Prop} (h : a ∧ b) : b ∧ a :=
let ⟨ha, hb⟩ := h in ⟨hb, ha⟩

def swap_pair'' : α × β → β × α :=
λ ⟨x, y⟩, (y, x)

theorem swap_conj'' {a b : Prop} : a ∧ b → b ∧ a :=
assume ⟨ha, hb⟩, ⟨hb, ha⟩

```

**结构化证明**
=================

提供了一些语法糖来编写结构化的证明项：

- `have h : p := s; t` 是 `(fun h : p => t) s` 的语法糖
- `suffices h : p from s; t` 是 `(λ h : p => s) t` 的语法糖
- `suffices h : p by s; t` 是 `(suffixes h : p from by s; t)` 的语法糖
- `show p from t` 是 `(have this : p := t; this)` 的语法糖
- `show p by tac` 是 `(show p from by tac)` 的语法糖
Lean 定理证明的类型可以根据 Lean 推断来省略。Lean 还允许使用``have : p := t; s``的语法，在本地环境中为假设命名为``this``。类似地，Lean 还识别了``suffices p from s; t``的变种，使用``this``作为新假设的名称。

符号``‹p›``是 ``(by assumption : p)``的简写，因此可以用来应用本地环境中的假设。

正如在 [Constructors, Projections and Matching](#constructors_projections_and_matching) 中指出的那样，匿名构造函数、投影和匹配语法在证明中可以像表示数据的表达式中一样使用。

```lean
example (p q r : Prop) : p → (q ∧ r) → p ∧ q :=
assume h₁ : p,
assume h₂ : q ∧ r,
have h₃ : q, from and.left h₂,
show p ∧ q, from and.intro h₁ h₃

example (p q r : Prop) : p → (q ∧ r) → p ∧ q :=
assume : p,
assume : q ∧ r,
have q, from and.left this,
show p ∧ q, from and.intro ‹p› this

example (p q r : Prop) : p → (q ∧ r) → p ∧ q :=
assume h₁ : p,
assume h₂ : q ∧ r,
suffices h₃ : q, from and.intro h₁ h₃,
show q, from and.left h₂
```

Lean 还支持一个计算环境，使用关键字``calc``引入。其语法如下：

```text
calc
  <expr>_0  'op_1'  <expr>_1  ':'  <proof>_1
    '...'   'op_2'  <expr>_2  ':'  <proof>_2
     ...
    '...'   'op_n'  <expr>_n  ':'  <proof>_n
```

这里是一个例子：

```lean
variable (a b c d e : Nat)
```
    变量 h1 : a = b
    变量 h2 : b = c + 1
    变量 h3 : c = d
    变量 h4 : e = 1 + d

    定理 T : a = e :=
    calc
      a     = b      : h1
        ... = c + 1  : h2
        ... = d + 1  : congr_arg _ h3
        ... = 1 + d  : add_comm d (1 : Nat)
        ... = e     : eq.symm h4

证明的风格与 "simp" 和 "rewrite" 策略结合使用时最有效。

计算
===========

除了涉及阻止计算的经典元素的表达式外，Lean 中的每个表达式都有自然的计算解释，如下一节所述。系统识别以下几种*规约*概念：

- *β-规约*：表达式 ``(λ x, t) s`` β-规约到 ``t[s/x]``，即将``t``中的``x``用``s``替换后的结果。
- *ζ-规约*：表达式 ``let x := s in t`` ζ-规约到 ``t[s/x]``。
- *δ-规约*：如果``c``是一个具有定义``t``的定义常量，则``c``δ-规约到``t``
- *ι-规约*：当一个通过对归纳类型进行递归定义的函数被应用于一个由显式构造函数给出的元素，结果ι-规约到指定的函数值，如 [归纳类型（Inductive Types）](inductive.md) 中所述。

规约关系是传递的，即如果``s``规约到``s'``，``t``规约到``t'``，那么``s t``规约到``s' t'``，``λ x, s``规约到``λ x, s'``，依此类推。如果``s``和``t``规约到一个公共术语，则它们被称为*定义相等*。定义相等被定义为满足所有这些属性并且还包括α-等价和以下两个关系的最小等价关系：
* *η-等价*：一个表达式 ``(λx, t x)`` 在 ``x`` 不在 ``t`` 中出现的前提下等价于 ``t`` 。
* *证明的不可加性* ：如果 ``p : Prop``，``s : p``，且 ``t : p``，那么 ``s`` 和 ``t`` 被认为是等价的。

最后这个事实反映出我们的直觉，即一旦我们证明了一个命题 ``p``，我们只关心该命题已被证明；证明只是一个见证，“p”为真的事实。

“定义上的相等”是一个非常强的值的相等概念。Lean 的逻辑基础让我们在检查一个项的类型是否正确或者具有给定的类型时，可以将在定义上相等的项视为相同。

约简关系被认为是强正则化的，也就是说，对一个项应用的所有约简序列最终都会终止。这个属性保证了 Lean 的类型检查算法至少在原则上是终止的。Lean 的一致性和相对于集合论语义的正当性并不依赖于这两个属性之一。

Lean 提供了两个用于计算表达式的命令：

* ``#reduce t``：使用核心类型检查程序对 ``t`` 进行约简，直到不再有可约简部分，并显示结果。
* ``#eval t``：使用一个快速的字节码求值器来求值 ``t``，并显示结果。

在 Lean 中，每个可计算的定义都会在定义时编译为字节码。字节码求值比核心求值更灵活：类型和所有命题信息都被抹除，函数使用基于堆栈的虚拟机进行求值。因此，``#eval`` 比 ``#reduce`` 更高效，并且可以用于执行复杂的程序。相比之下，``#reduce`` 的设计目标是更小、更可靠，并且在每一步产生类型正确的项。字节码在类型检查中从不使用，因此就可信计算基础而言，只有核心约简是它的一部分。

.. code-block:: lean

    #reduce (fun x => x + 3) 5
    #eval   (fun x => x + 3) 5

    #reduce let x := 5; x + 3
    #eval   let x := 5; x + 3

    def f x := x + 3
# LEAN 定理证明

```
reduce f 5
eval   f 5

reduce @Nat.rec (λ n => Nat) (0 : Nat)
                 (λ n recval : Nat => recval + n + 1) (5 : Nat)

def g : Nat → Nat
| 0     => 0
| (n+1) => g n + n + 1

reduce g 5
eval   g 5

eval   g 5000

example : (fun x => x + 3) 5 = 8 := rfl
example : (fun x => f x) = f := rfl
example (p : Prop) (h₁ h₂ : p) : h₁ = h₂ := rfl
```

注意：proof irrelevance 和 singleton `Prop` 的 ι-reduction 排除了定义上的相等，正如上面所述，这使得定义上的相等变得无法判定。Lean 用于检查定义上相等的过程只是一个逼近理想的过程，它并不是传递的，如下面的例子所示。但这并不会影响 Lean 的一致性或可靠性，只是意味着 Lean 对于可作为有效输入识别得更保守，并且这在实践中并不会引起问题。Singleton 展开将在 [归纳类型](./inductive.md) 中详细讨论。

```lean
def R (x y : unit) := false
def accrec := @acc.rec unit R (λ_, unit) (λ _ a ih, ()) ()
example (h) : accrec h = accrec (acc.intro _ (λ y, acc.inv h)) :=
              rfl
example (h) : accrec (acc.intro _ (λ y, acc.inv h)) = () := rfl
example (h) : accrec h = () := sorry   -- rfl fails
```

公理
======

Lean 的基础框架包括：

- 类型宇宙和依赖函数类型，如前所述。

- 归纳定义，如在 [归纳类型](./inductive.md) 和
  [归纳家族](./declarations.md#inductive-families) 中所述。

此外，核心库定义了（并相信）以下公理性扩展：
- 命题性等式：

```lean
## LEAN 定理证明

- 商集：

  ```lean
  namespace hide
  -- BEGIN
  universes u v

  constant quot      : Π {α : Sort u}, (α → α → Prop) → Sort u

  constant quot.mk   : Π {α : Sort u} (r : α → α → Prop),
                          α → quot r

  axiom    quot.ind  : ∀ {α : Sort u} {r : α → α → Prop}
                            {β : quot r → Prop},
                          (∀ a, β (quot.mk r a)) →
                            ∀ (q : quot r), β q

  constant quot.lift : Π {α : Sort u} {r : α → α → Prop}
                            {β : Sort u} (f : α → β),
                          (∀ a b, r a b → f a = f b) → quot r → β

  axiom quot.sound   : ∀ {α : Type u} {r : α → α → Prop}
                            {a b : α},
                          r a b → quot.mk r a = quot.mk r b
  -- END
  end hide
  ```

  在 Lean 中，``quot r`` 表示由包含 ``r`` 的最小等价关系对 ``α`` 进行商集构造。函数 ``quot.mk`` 和 ``quot.lift`` 符合以下计算规则：

  ```text
  quot.lift f h (quot.mk r a) = f a
  ```

- 选择：

  ```lean
  namespace hide
  universe u

  -- BEGIN
  axiom choice {α : Sort u} : nonempty α → α
  -- END

  end hide
  ```

  这里的 ``nonempty α`` 定义如下：

  ```lean
  namespace hide
  universe u

  -- BEGIN
  class inductive nonempty (α : Sort u) : Prop
  | intro : α → nonempty
  -- END

  end hide
  ```

  它等价于 ``∃ x : α, true``。

商集构造蕴含函数外延性。``choice`` 原则与其他原则一起构成了经典公理体系；特别地，它蕴含了排中律和命题可判定性。使用 ``choice`` 生成数据的函数与计算解释不兼容，不会生成字节码。它们需要被声明为 ``noncomputable``。
为了元编程目的，Lean 还允许在对象语言之外定义对象。这些对象用 ``meta`` 关键字表示，如 [元编程](metaprogramming.md) 中所述。