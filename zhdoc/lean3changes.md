# Lean 4 中的重大改变

Lean 4 和 Lean 3 不兼容。
我们重新编写了大部分系统，并借此机会清理了语法、元编程框架和求值器。在本部分，我们将介绍最重大的改变。

## Lambda 表达式

我们不再使用 `,` 来分隔绑定器和 lambda 表达式的主体。
Lean 3 中的 lambda 表达式语法是不常见的，`,` 在 Lean 3 中使用过于频繁。
例如，我们认为 Lean 3 中的 lambda 表达式列表非常令人困惑，因为 `,` 用于分隔列表的元素和 lambda 表达式本身。
现在我们使用 `=>` 作为分隔符，例如，`fun x => x` 表示恒等函数。您仍然可以使用符号 `λ` 作为 `fun` 的简写。
新的 lambda 表达式符号有许多 Lean 3 不支持的新功能。

## 模式匹配

在 Lean 4 中，可以轻松创建缩写常用习语的新符号。其中之一是 `fun` 后跟 `match`。在以下示例中，我们使用 `fun`+`match` 符号定义了一些函数。

```lean
# namespace ex1
def Prod.str : Nat × Nat → String :=
  fun (a, b) => "(" ++ toString a ++ ", " ++ toString b ++ ")"

structure Point where
  x : Nat
  y : Nat
  z : Nat

def Point.addX : Point → Point → Nat :=
  fun { x := a, .. } { x := b, .. } =>  a+b

def Sum.str : Option Nat → String :=
  fun
    | some a => "some " ++ toString a
    | none   => "none"
# end ex1
```

## 隐式 lambda 函数

在 Lean 3 的 stdlib（标准库）中，我们经常发现很多令人讨厌的 `@` + `_` 表达式的实例。它经常用于期望类型是带有隐式参数的函数类型，并且我们有一个也带有隐式参数的常量（如上面链接中的 `reader_t.pure`）。在 Lean 4 中，推导器会自动引入 lambda 函数来消耗隐式参数。我们仍在探索这个特性并分析其影响，但迄今为止的经验非常积极。下面是使用 Lean 4 隐式 lambda 函数的链接中的示例：

```lean
import data.reader_t.basic

#check @pure
```

这个示例展示了 Lean 4 中使用隐式 lambda 函数来消耗隐式参数的方式。

```lean
# variable (ρ : Type) (m : Type → Type) [Monad m]
instance : Monad (ReaderT ρ m) where
  pure := ReaderT.pure
  bind := ReaderT.bind
```

用户可以通过使用 `@` 来禁用隐式 lambda 功能，或者通过使用 `{}` 或 `[]` 绑定注释来编写 lambda 表达式。
以下是一些示例：

```lean
# namespace ex2
def id1 : {α : Type} → α → α :=
  fun x => x

def listId : List ({α : Type} → α → α) :=
  (fun x => x) :: []

-- In this example, implicit lambda introduction has been disabled because
-- we use `@` before `fun`
def id2 : {α : Type} → α → α :=
  @fun α (x : α) => id1 x

def id3 : {α : Type} → α → α :=
  @fun α x => id1 x

def id4 : {α : Type} → α → α :=
  fun x => id1 x

-- In this example, implicit lambda introduction has been disabled
-- because we used the binder annotation `{...}`
def id5 : {α : Type} → α → α :=
  fun {α} x => id1 x
# end ex2
```

## 简单函数的语法糖

在 Lean 3 中，我们可以通过使用括号将中缀操作符转换为简单函数。例如，`(+1)` 是 `fun x, x + 1` 的语法糖。在 Lean 4 中，我们使用 `·` 作为占位符来推广这种表示法。以下是一些例子：

```lean
/- Lean 3 -/
-- Lean 3 的语法
def addOne (x : ℕ) : ℕ :=
  x + 1

/- Lean 4 -/
-- Lean 4 的语法
def addOne : ℕ → ℕ :=
  · + 1
```

在 Lean 4 中，我们不再需要显式地指定参数 `x`，而是使用占位符 `·` 来隐式地引用输入参数。

```lean
# namespace ex3
#check (· + 1)
-- fun a => a + 1
#check (2 - ·)
-- fun a => 2 - a
#eval [1, 2, 3, 4, 5].foldl (·*·) 1
-- 120

def f (x y z : Nat) :=
  x + y + z

#check (f · 1 ·)
-- fun a b => f a 1 b

#eval [(1, 2), (3, 4), (5, 6)].map (·.1)
-- [1, 3, 5]
# end ex3
```

在 Lean 3 中，使用括号来激活符号，并且通过收集嵌套的 `·` 来创建 lambda 抽象。收集过程会被嵌套的括号中断。在下面的示例中，创建了两个不同的 lambda 表达式。

```lean
#check (Prod.mk · (· + 1))
-- fun a => (a, fun b => b + 1)
```

## 函数应用

在 Lean 4 中，我们支持命名参数。
命名参数使您可以通过将参数与其名称匹配而不是与其在参数列表中的位置匹配来为参数指定参数。
如果您不记得参数的顺序但知道它们的名称，您可以以任何顺序发送参数。您还可以在 Lean 未能推断出它时为隐含参数提供值。命名参数还通过标识每个参数代表的内容来提高代码的可读性。

```lean
def sum (xs : List Nat) :=
  xs.foldl (init := 0) (·+·)

#eval sum [1, 2, 3, 4]
-- 10

example {a b : Nat} {p : Nat → Nat → Nat → Prop} (h₁ : p a b b) (h₂ : b = a)
    : p a a b :=
  Eq.subst (motive := fun x => p a x b) h₂ h₁
```

在下面的示例中，我们将说明命名参数和默认参数之间的交互作用。

```python
def greet(name, greeting="Hello"):
    return f"{greeting}, {name}!"

print(greet("Alice"))
print(greet("Bob", "Greetings"))
```

输出结果：

```
Hello, Alice!
Greetings, Bob!
```

在这个例子中，我们定义了一个名为 `greet` 的函数。它有两个参数，`name` 和 `greeting`。`greeting` 参数有一个默认值 `"Hello"`，这意味着如果调用函数时没有提供 `greeting` 参数，它将被默认为 `"Hello"`。这样的定义使得我们可以选择性地指定问候语。

在第一次调用 `greet` 函数时，我们只提供了一个参数 `"Alice"`，这个参数将被赋给 `name` 参数，而 `greeting` 参数将使用默认值 `"Hello"`。所以函数返回值是 `"Hello, Alice!"`。

而在第二次调用 `greet` 函数时，我们同时指定了 `name` 和 `greeting` 参数的值。所以函数返回值是 `"Greetings, Bob!"`。

这个例子展示了如何在函数定义时通过给参数设置默认值来实现灵活性，并且在调用函数时可以根据需要覆盖默认值。这种功能在编写可重复使用的代码时非常有用，并且可以节省不必要的冗余代码。

```lean
def f (x : Nat) (y : Nat := 1) (w : Nat := 2) (z : Nat) :=
  x + y + w - z

example (x z : Nat) : f (z := z) x = x + 1 + 2 - z := rfl

example (x z : Nat) : f x (z := z) = x + 1 + 2 - z := rfl

example (x y : Nat) : f x y = fun z => x + y + 2 - z := rfl

example : f = (fun x z => x + 1 + 2 - z) := rfl

example (x : Nat) : f x = fun z => x + 1 + 2 - z := rfl

example (y : Nat) : f (y := 5) = fun x z => x + 5 + 2 - z := rfl

def g {α} [Add α] (a : α) (b? : Option α := none) (c : α) : α :=
  match b? with
  | none   => a + c
  | some b => a + b + c

variable {α} [Add α]

example : g = fun (a c : α) => a + c := rfl

example (x : α) : g (c := x) = fun (a : α) => a + x := rfl

example (x : α) : g (b? := some x) = fun (a c : α) => a + x + c := rfl

example (x : α) : g x = fun (c : α) => x + c := rfl

example (x y : α) : g x y = fun (c : α) => x + y + c := rfl
```

在 Lean 4 中，我们可以使用 `..` 将缺失的显式参数设为 `_`。
这个功能与命名参数结合使用对于编写模式非常有用。以下是一个示例：

```lean
def example (x : ℕ) : Prop :=
  match x with
  | 0     => true
  | 1     => false
  | (n+2) => example n
  | ..    => true
```

在这个例子中，我们定义了一个叫做 `example` 的函数，其输入参数 `x` 是一个自然数，并返回一个命题。
通过 `match` 表达式，我们对输入参数进行模式匹配。
当 `x` 为 0 时，返回 true；当 `x` 为 1 时，返回 false；当 `x` 可以写成 `(n+2)` 的形式时，递归调用 `example` 函数并将 `x` 设置为 `n`。
而当 `x` 不符合以上条件时，使用 `..` 表示其他情况，返回 true。

这种模式匹配的用法在处理特定情况时非常方便，能够简化代码并提高可读性。

```lean
inductive Term where
  | var    (name : String)
  | num    (val : Nat)
  | add    (fn : Term) (arg : Term)
  | lambda (name : String) (type : Term) (body : Term)

def getBinderName : Term → Option String
  | Term.lambda (name := n) .. => some n
  | _ => none

def getBinderType : Term → Option Term
  | Term.lambda (type := t) .. => some t
  | _ => none
```

当 LEAN 自动推断出明确的参数时，省略号也很有用，我们想要避免使用一系列的 `_`。

```lean
example (f : Nat → Nat) (a b c : Nat) : f (a + b + c) = f (a + (b + c)) :=
  congrArg f (Nat.add_assoc ..)
```

在 Lean 4中，无法再使用 `f x` 来表示 `f(x)`，你必须在函数与其参数之间使用空格（例如 `f (x)`）。

## 依赖函数类型

给定 `α : Type` 和 `β : α → Type`，`(x : α) → β x` 表示具有以下属性的函数 `f` 的类型：
对于每个 `a : α`，`f a` 是 `β a` 的一个元素。换句话说，`f` 返回的值的类型取决于其输入。
我们称 `(x : α) → β x` 为依赖函数类型。在 Lean 3 中，我们可以使用以下三种等价的表示法来表示依赖函数类型：
`forall x : α, β x` 或 `∀ x : α, β x` 或 `Π x : α, β x`。
前两种表示法旨在用于编写命题，而后一种表示法旨在用于编写代码。
尽管 `Π x : α, β x` 表示法在历史上具有重要意义，但我们在 Lean 4 中已将其删除，因为它使用起来很麻烦，经常会使新用户感到困惑。我们仍然可以使用 `forall x : α, β x` 和 `∀ x : α, β x`。

```lean
#check forall (α : Type), α → α
#check ∀ (α : Type), α → α
#check ∀ α : Type, α → α
#check ∀ α, α → α
#check (α : Type) → α → α
#check {α : Type} → (a : Array α) → (i : Nat) → i < a.size → α
#check {α : Type} → [ToString α] → α → String
#check forall {α : Type} (a : Array α) (i : Nat), i < a.size → α
#check {α β : Type} → α → β → α × β
```

## `meta` 关键字

在 Lean 3 中，关键字 `meta` 用于标记可以使用在 C/C++ 中实现的原始功能的定义。这些元定义还可以递归地调用自身，放宽了普通类型理论所施加的终止限制。元定义还可以使用不安全的原始功能，例如 `eval_expr (α : Type u) [reflected α] : expr → tactic α`，或者破坏引用透明性的原始功能 `tactic.unsafe_run_io`。

在 Lean 4 中，关键字 `meta` 已经被删除。然而，我们可能会在将来重新引入它，但其用途会受到更严格的限制：用于标记在 Lean 生成的可执行文件中不应包含的元代码。

在 Lean 4 中，关键字 `constant` 被删除了，应使用 `axiom` 代替。在 Lean 4 中，新的命令 `opaque` 用于定义一个不透明的定义。下面是两个简单的例子：

```lean
# namespace meta1
opaque x : Nat := 1
-- The following example will not type check since `x` is opaque
-- example : x = 1 := rfl

-- We can evaluate `x`
#eval x
-- 1

-- When no value is provided, the elaborator tries to build one automatically for us
-- using the `Inhabited` type class
opaque y : Nat
# end meta1
```

我们可以使用`@[extern "foreign_function"]`属性来指示Lean使用外部函数作为任何定义的实现。
用户有责任确保外部实现是正确的。
然而，在这里用户的错误只会影响Lean生成的代码，而不会危及系统的逻辑正确性。
也就是说，你不能使用`@[extern]`属性证明`False`。
当我们想要在Lean中提供一个参考实现，用于推理时，我们使用`@[extern]`与定义一起使用。当我们编写如下定义时：

```lean
@[extern "lean_nat_add"]
def add : Nat → Nat → Nat
  | a, Nat.zero   => a
  | a, Nat.succ b => Nat.succ (add a b)
```

Lean 假设外部函数 `lean_nat_add` 实现了上述参考实现。

`unsafe` 关键字允许我们使用不安全的特性来定义函数，比如一般递归和任意类型转换。正常的（安全的）函数不能直接使用 `unsafe` 函数，因为这会危及系统的逻辑正确性。与常规编程语言一样，使用不安全特性编写的程序可能会在运行时崩溃。以下是几个不安全的例子：

```lean
unsafe def unsound : False :=
  unsound

#check @unsafeCast
-- {α : Type _} → {β : Type _} → α → β

unsafe def nat2String (x : Nat) : String :=
  unsafeCast x

-- The following definition doesn't type check because it is not marked as `unsafe`
-- def nat2StringSafe (x : Nat) : String :=
--   unsafeCast x
```

`unsafe` 关键字在我们想要利用 Lean 执行运行时的实现细节时特别有用。例如，我们无法在 Lean 中证明数组具有最大大小，但是用于执行 Lean 程序的运行时保证了数组在 64 位（32 位）机器上不能超过 2^64（2^32）个元素。我们可以利用这一事实来为数组函数提供更高效的实现。然而，如果只能在不安全的代码中使用高效版本，那么高效版本将不会太有用。因此，Lean 4 提供了属性 `@[implemented_by 函数名]`。其想法是为安全定义或常量提供一个不安全（可能更高效）版本。属性 `@[implemented_by f]` 的函数 `f` 非常类似于 extern/foreign 函数，关键区别在于它是在 Lean 本身中实现的。再次强调，使用 `implemented_by` 属性不能危害系统的逻辑正确性，但是如果实现不正确，您的程序可能会在运行时崩溃。在下面的示例中，我们定义了 `withPtrUnsafe a k h`，它使用存储在内存中的 `a` 的内存地址执行 `k`。参数 `h` 是证明 `k` 是一个常量函数的证明。然后，我们在 `withPtr` 处“封装”这个不安全的实现。证明 `h` 确保了参考实现 `k 0` 是正确的。更多信息请参阅文章“在纯函数之后封装基于指针的优化”。

```lean
unsafe
def withPtrUnsafe {α β : Type} (a : α) (k : USize → β) (h : ∀ u, k u = k 0) : β :=
  k (ptrAddrUnsafe a)

@[implemented_by withPtrUnsafe]
def withPtr {α β : Type} (a : α) (k : USize → β) (h : ∀ u, k u = k 0) : β :=
  k 0
```

General recursion（一般递归）在实践中非常有用，没有它就不可能实现 Lean 4。

关键字 `partial` 实现了一种非常简单和高效的支持一般递归的方法。

简单性在这里是关键，因为有引导问题。也就是说，在实现许多其特性（例如策略框架或支持基于良好基础的递归）之前，我们必须在 Lean 中实现 Lean。

我们的要求之一是性能。用 `partial` 标记的函数应该与 OCaml 等主流函数式编程语言中实现的函数一样高效。

当使用 `partial` 关键字时，Lean 会生成一个使用一般递归的辅助 `unsafe` 定义，然后定义一个由该辅助定义实现的不透明常量。

这非常简单高效，足以让用户将 Lean 用作常规编程语言。

`partial` 定义不能使用 `unsafeCast` 和 `ptrAddrUnsafe` 等不安全的功能，它只能用于我们已知为具有实例的类型的实现。

最后，由于我们使用不透明常量“封存”辅助定义，我们无法推理关于 `partial` 定义的性质。

我们知道像 Isabelle 这样的证明助手提供了一个框架来定义偏函数，并且不会阻止用户证明关于它们的性质。Lean 4 可以实现这种框架。实际上，用户可以实现它，因为 Lean 4 是一个可扩展的系统。

开发人员目前没有计划为 Lean 4 实现此类支持。然而，我们强调用户可以使用一种函数遍历 Lean 生成的辅助不安全定义，并使用与 Isabelle 中使用的方法类似的方法生成一个安全定义。

```lean
# namespace partial1
partial def f (x : Nat) : IO Unit := do
  IO.println x
  if x < 100 then
     f (x+1)

#eval f 98
# end partial1
```

## 库的变化

这些是可能会使 Lean 3 用户困惑的库的变化：

- `List` 不再是一个 monad（单子）。

## 风格的变化

还进行了一些编码风格上的改变：

- 术语常量和变量现在使用 `lowerCamelCase` 而不是 `snake_case`。
- 类型常量现在使用 `UpperCamelCase`，如 `Nat`，`List`。类型变量仍然使用小写希腊字母。Functor 仍然使用小写拉丁字母 `(m : Type → Type) [Monad m]`。
- 在定义类型类时，更倾向于不使用 "has"。例如，使用 `ToString` 或 `Add`，而不是 `HasToString` 或 `HasAdd`。
- 在 monad 表达式中，更倾向于使用 `return` 而不是 `pure`。
- 使用管道 `<|` 来表示函数应用，而不是 `$`。
- 声明体应始终缩进：
  ```lean
  inductive Hello where
    | foo
    | bar

  structure Point where
    x : Nat
    y : Nat

  def Point.addX : Point → Point → Nat :=
    fun { x := a, .. } { x := b, .. } => a + b
  ```
- 在结构体和类型类定义中，更倾向于使用 `where` 而不是 `:=`，并且不要用括号括起字段。（在上面的 `Point` 中已示例。）