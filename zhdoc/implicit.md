## 隐式参数

假设我们将 `compose` 函数定义为：

```lean
def compose (α β γ : Type) (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)
```

函数 `compose` 接受三个类型，``α``, ``β``, 和 ``γ``，和两个函数，``g : β → γ`` 和 ``f : α → β``，一个值 `x : α`，返回 ``g (f x)``，也就是 ``g`` 和 ``f`` 的复合函数。
我们说 `compose` 对于类型 ``α``, ``β``, 和 ``γ`` 是多态的。现在，让我们来使用 `compose`：

```lean
# def compose (α β γ : Type) (g : β → γ) (f : α → β) (x : α) : γ :=
#   g (f x)
def double (x : Nat) := 2*x
def triple (x : Nat) := 3*x

#check compose Nat Nat Nat double triple 10 -- Nat
#eval  compose Nat Nat Nat double triple 10 -- 60

def appendWorld (s : String) := s ++ "world"
#check String.length -- String → Nat

#check compose String String Nat String.length appendWorld "hello" -- Nat
#eval  compose String String Nat String.length appendWorld "hello" -- 10
```

由于``compose``在类型``α``，``β``和``γ``上是多态的，我们需要在上面的例子中提供它们。
但是这些信息是冗余的：可以从参数``g``和``f``中推断出这些类型。
这是依赖类型理论的一个核心特性：术语携带很多信息，而且往往可以从上下文中推断出其中的一些信息。
在Lean中，使用一个下划线，``_``，来指定系统应该自动填充信息。

```lean
# def compose (α β γ : Type) (g : β → γ) (f : α → β) (x : α) : γ :=
#  g (f x)
# def double (x : Nat) := 2*x
# def triple (x : Nat) := 3*x
#check compose _ _ _ double triple 10 -- Nat
#eval  compose Nat Nat Nat double triple 10 -- 60
# def appendWorld (s : String) := s ++ "world"
# #check String.length -- String → Nat
#check compose _ _ _ String.length appendWorld "hello" -- Nat
#eval  compose _ _ _ String.length appendWorld "hello" -- 10
```

尽管如此，在输入所有这些下划线仍然很繁琐。当一个函数接受一个通常可以从上下文中推断出来的参数时，Lean 允许我们指定这个参数默认情况下应该被设置为隐式的。这可以通过将参数放在花括号中来实现，如下所示：

```lean
def compose {α β γ : Type} (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)
# def double (x : Nat) := 2*x
# def triple (x : Nat) := 3*x
#check compose double triple 10 -- Nat
#eval  compose double triple 10 -- 60
# def appendWorld (s : String) := s ++ "world"
# #check String.length -- String → Nat
#check compose String.length appendWorld "hello" -- Nat
#eval  compose String.length appendWorld "hello" -- 10
```

一切变化的只是``α β γ: Type``周围的括号。
这使得这三个参数成为了隐式参数。在符号上，这隐藏了类型的规定，
使得``compose``看起来好像只接受了三个参数。

当变量使用``variable``命令声明时，也可以将其声明为隐式参数：

```lean
universe u

section
  variable {α : Type u}
  variable (x : α)
  def ident := x
end

variable (α β : Type u)
variable (a : α) (b : β)

#check ident
#check ident a
#check ident b
```

这里的“ident”定义与前面的定义具有相同的效果。

Lean具有非常复杂的隐式参数实例化机制，我们将看到它们可以用于推断函数类型、谓词甚至证明。
在将术语中的这些“空白”或“占位符”填充的过程中，会涉及到更大的一个过程，称为*推断*（elaboration）。
隐式参数的存在意味着有时可能不足以准确确定表达式的含义。
像“ident”这样的表达式被称为*多态*，因为它可以在不同的上下文中具有不同的含义。

通过写成“(e : T)”，可以始终指定表达式“e”的类型为“T”。
这告诉Lean的推断器在尝试推断它时使用值“T”作为“e”的类型。
在下面的示例中，使用这种机制指定了表达式“ident”的期望类型。

```lean
def ident {α : Type u} (a : α) : α := a

#check (ident : Nat → Nat) -- Nat → Nat
```

在 Lean 中，数字的重载很常见。但是当无法推断出数字的类型时，默认情况下 Lean 会假设它是一个自然数。
因此，下面的前两个 ``#check`` 表达式都是按相同的方式展开的，而第三个 ``#check`` 命令将 ``2`` 解释为整数。

```lean
#check 2         -- Nat
#check (2 : Nat) -- Nat
#check (2 : Int) -- Int
```

然而，有时候我们可能会遇到一种情况：我们已将函数的参数声明为隐式的，但现在想要显式地提供该参数。如果 ``foo`` 是这样的一个函数，那么符号 ``@foo`` 表示将所有参数都显式地传递给相同的函数。

```lean
# def ident {α : Type u} (a : α) : α := a
variable (α β : Type)

#check @ident           -- {α : Type u} → α → α
#check @ident α         -- α → α
#check @ident β         -- β → β
#check @ident Nat       -- Nat → Nat
#check @ident Bool true -- Bool
```

注意，现在第一个 ``#check`` 命令给出了标识符 ``ident`` 的类型，而没有插入任何占位符。
此外，输出指示第一个参数是隐式参数。

命名参数使您能够通过匹配参数名称而不是参数列表中的位置来指定参数的值。您可以使用它们来指定显式参数和隐式参数。
如果你不记得参数的顺序，但知道它们的名称，你可以以任意顺序发送参数。
您还可以在 Lean 无法推断出隐式参数的值时提供它的值。命名参数还通过标识每个参数的含义来提高代码的可读性。

```lean
# def ident {α : Type u} (a : α) : α := a

#check ident (α := Nat)  -- Nat → Nat
#check ident (α := Bool) -- Bool → Bool
```

