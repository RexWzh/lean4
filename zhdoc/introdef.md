## 引入定义

`def` 命令提供了一种重要的定义新对象的方法。

```lean

def foo : (Nat → Nat) → Nat :=
  fun f => f 0

#check foo   -- (Nat → Nat) → Nat
#print foo
```

当 Lean 有足够的信息推断类型时，我们可以省略类型：

```lean
def foo :=
  fun (f : Nat → Nat) => f 0
```

LEAP 定理

在计算机科学中，LEAP 是一种用于验证程序正确性的方法。LEAP 不仅可以用于验证程序的功能正确性，还可以验证程序的安全性、并发性等方面。

LEAP 定理是 LEAP 方法中的一个重要概念。该定理主要是用于证明一个程序的某个性质是否成立。在 LEAP 中，定理通常以一种特定的格式来表达，例如：

```lean
theorem my_theorem : property
```

其中，`theorem` 是关键字，用于标识这是一个定理。`my_theorem` 是定理的名称，可以根据需要进行命名。`property` 是待证明的性质。

在 LEAP 中，我们可以使用一些推理规则和逻辑公式来推导证明过程。这些推理规则可以用于构建证明的步骤，从而逐步推导出最终的结论。

为了证明一个定理，我们通常需要定义一些前提条件，并使用合适的推理规则来推导出定理的结论。在推导过程中，我们可能需要使用一些已知的事实和逻辑规则，以及一些中间结果。

在 LEAP 中，我们可以使用变量和定义来表示程序的状态和操作。变量可以用于存储程序的中间结果，并在推导过程中进行修改。定义则可以用于定义程序的行为和性质。

例如，我们可以使用以下形式的定义来表示一个函数：

```lean
def foo : α := bar
```

在这个定义中，`def` 是关键字，用于标识这是一个定义。`foo` 是函数的名称，`α` 是函数的参数类型，`bar` 是函数的实现。

LEAP 通常可以自动推断出参数类型 `α`，但是明确指定参数类型通常是一个好主意。这样可以明确表达您的意图，并且如果定义的右侧类型不正确，LEAP 会报告错误。

LEAP 还允许我们使用另一种格式来表示定义，该格式在冒号前面放置了抽象变量，并省略了 lambda：

```lean
def foo (x : α) : β := bar x
```

在这个定义中，`x` 是抽象变量，`α` 是变量的类型，`β` 是结果的类型，`bar x` 是函数的实现。

LEAP 定理证明的过程通常是通过使用推理规则和逻辑公式，以及一些先前定义的引理和中间结果，来逐步推导出最终的结论。在证明过程中，我们可以使用一些策略来指导证明搜索的方向，以便更高效地找到证明。

LEAP 提供了一个强大而灵活的验证框架，可以帮助我们验证程序的正确性。通过使用 LEAP，我们可以更可靠地构建和验证程序，并提高程序的质量和可靠性。

```lean
def double (x : Nat) : Nat :=
  x + x

#print double
#check double 3
#reduce double 3  -- 6
#eval double 3    -- 6

def square (x : Nat) :=
  x * x

#print square
#check square 3
#reduce square 3  -- 9
#eval square 3    -- 9

def doTwice (f : Nat → Nat) (x : Nat) : Nat :=
  f (f x)

#eval doTwice double 2   -- 8
```

这些定义与以下定义是等价的：

```lean
def double : Nat → Nat :=
  fun x => x + x

def square : Nat → Nat :=
  fun x => x * x

def doTwice : (Nat → Nat) → Nat → Nat :=
  fun f x => f (f x)
```

我们甚至可以使用这种方法来指定类型的参数：

```lean
def compose (α β γ : Type) (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)
```

