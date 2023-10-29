# `do` 表达式

Lean 是一种纯函数式编程语言，但你可以使用 `do` 内嵌领域特定语言（DSL）来编写有副作用的代码。下面的简单程序在标准输出中打印了两个字符串 "hello" 和 "world"，然后以退出码 0 终止。请注意，该程序的类型是 `IO UInt32`。你可以将这个类型理解为具有输入输出效果并产生一个 `UInt32` 类型的值的类型。

```lean
def main : IO UInt32 := do
  IO.println "hello"
  IO.println "world"
  return 0
```

`IO.println("hello");`

In this case, the `do` block is replaced by a `;` to separate the statements and curly braces are used to enclose the statements.

Next, let's look at the `IO` type. `IO` is a type that represents actions that may perform input/output effects. In Lean, `IO` is a monad, which means it provides a way to sequence multiple actions together. We can use the `>>=` operator, pronounced "bind", to combine two actions. For example, if we have two actions `a : IO A` and `b : A → IO B`, we can use the `>>=` operator to sequence them as follows:

```lean
a >>= (λ (x : A), b x)
```

This code uses the lambda expression `(λ (x : A), b x)` to specify what to do with the result produced by the action `a`. Inside the lambda expression, `x : A` represents the result produced by `a`, and `b x` represents the action to be performed next.

The `>>=` operator has type `IO A → (A → IO B) → IO B`, which means it takes an action `a : IO A` and a function `(λ (x : A), b x) : A → IO B`, and produces a new action of type `IO B`.

In Lean, we can use the `do` notation to write sequences of actions in a more concise and readable way. The `do` notation allows us to write actions one after another, and automatically inserts the necessary `>>=` operators to combine them. For example, we can rewrite the previous example using the `do` notation as follows:

```lean
do
  x ← a,
  b x
```

In this code, the action `a` is performed first, and its result is bound to the variable `x`. Then, the action `b x` is performed, using the result `x` produced by `a`.

The `do` notation provides a convenient way to write sequences of actions, and makes it easier to understand the flow of the program. Note that the `do` notation is not limited to `IO` actions - it can be used with any monadic type in Lean.

```lean
def main : IO UInt32 := do {
  IO.println "hello";
  IO.println "world";
  return 0;
}
```

即使没有使用大括号，分号仍然可以使用。它们在你想要在一行中“打包”多个动作时特别有用。

```lean
def main : IO UInt32 := do
  IO.println "hello"; IO.println "world"
  return 0
```

在编程语言中，空白符敏感性是一个备受争议的话题。你应该使用自己的编码风格。我们，Lean 开发者，**热衷于**无花括号和无分号的编码风格。
我们认为这种风格干净而优美。

`do` DSL 展开为核心 Lean 语言。通过使用 `#print` 和 `#check` 命令，我们来检查不同的组件。

```lean
# def main : IO UInt32 := do
#  IO.println "hello"
#  IO.println "world"
#  return 0

#check IO.println "hello"
-- IO Unit
#print main
-- Output contains the infix operator `>>=` and `pure`
-- The following `set_option` disables notation such as `>>=` in the output
set_option pp.notation false in
#print main
-- Output contains `bind` and `pure`
#print bind
-- bind : {m : Type u → Type v} → [self : Bind m] → {α β : Type u} →
--        m α → (α → m β) → m β
#print pure
-- pure : {m : Type u → Type v} → [self : Pure m] → {α : Type u} →
--        α → m α

-- IO implements the type classes `Bind` and `Pure`.
#check (inferInstance : Bind IO)
#check (inferInstance : Pure IO)
```

`bind` 和 `pure` 的类型乍一看确实有些令人生畏。它们都有许多隐含参数。让我们先关注显式参数。
`bind` 有两个显式参数 `m α` 和 `α → m β`。第一个参数应该被视为一个带有效果 `m` 的动作，并产生类型为 `α` 的值。
第二个参数是一个接受类型为 `α` 的值并生成带有效果 `m` 和类型为 `β` 的值的动作的函数。结果是 `m β`。方法 `bind` 是将这两个动作组合在一起。
我们经常说 `bind` 就是一个抽象的分号。方法 `pure` 将一个值 `α` 转换为生成一个动作 `m α` 的动作。

下面是使用 `bind` 和 `pure` 在没有 `do` DSL 的情况下定义的相同函数。

```lean
def main : IO UInt32 :=
  bind (IO.println "hello") fun _ =>
  bind (IO.println "world") fun _ =>
  pure 0
```

符号 `let x <- action1; action2` 和 `let x ← action1; action2` 只是 `bind action1 fun x => action2` 的语法糖。
下面是一个使用它的小例子。

```lean
def add_two_numbers (a b : nat) : nat :=
  let x <- nat.add a b;
  let y <- x + 1;
  y

#eval add_two_numbers 2 3 -- 输出结果为 6
```

在这个例子中，`add_two_numbers` 函数接受两个自然数 `a` 和 `b`，然后将它们相加。我们使用 `let` 语法糖来定义中间变量 `x` 和 `y`。首先，`x` 绑定到 `nat.add a b` 的结果。接着，`y` 绑定到 `x + 1` 的结果。最后，`y` 的值作为整个函数的结果返回。在这个例子中，`add_two_numbers 2 3` 的结果是 6。

```lean
def isGreaterThan0 (x : Nat) : IO Bool := do
  IO.println s!"value: {x}"
  return x > 0

def f (x : Nat) : IO Unit := do
  let c <- isGreaterThan0 x
  if c then
    IO.println s!"{x} is greater than 0"
  else
    pure ()

#eval f 10
-- value: 10
-- 10 is greater than 0
```

## 嵌套操作

请注意，我们不能写 `if isGreaterThan0 x then ... else ...`，因为`if-then-else`中的条件是没有副作用的**纯**值，但是 `isGreaterThan0 x` 的类型是 `IO Bool`。你可以使用嵌套操作表示法来避免这种不便。下面是使用嵌套操作定义的 `f` 的等效定义。

``` lean
def f : IO Unit :=
if isGreaterThan0 x then
   ...
else
   ...
```


```lean
# def isGreaterThan0 (x : Nat) : IO Bool := do
#  IO.println s!"x: {x}"
#  return x > 0

def f (x : Nat) : IO Unit := do
  if (<- isGreaterThan0 x) then
    IO.println s!"{x} is greater than 0"
  else
    pure ()

#print f
```

Lean通过引入`bind`函数对嵌套的操作进行了优化。
这里有一个包含两个嵌套操作的例子。请注意，即使`x = 0`，两个操作都会被执行。

```lean
# def isGreaterThan0 (x : Nat) : IO Bool := do
#  IO.println s!"x: {x}"
#  return x > 0

def f (x y : Nat) : IO Unit := do
  if (<- isGreaterThan0 x) && (<- isGreaterThan0 y) then
    IO.println s!"{x} and {y} are greater than 0"
  else
    pure ()

#eval f 0 10
-- value: 0
-- value: 10

-- The function `f` above is equivalent to
def g (x y : Nat) : IO Unit := do
  let c1 <- isGreaterThan0 x
  let c2 <- isGreaterThan0 y
  if c1 && c2 then
    IO.println s!"{x} and {y} are greater than 0"
  else
    pure ()

theorem fgEqual : f = g :=
  rfl -- proof by reflexivity
```

以下是实现示例中短路语义的两种方式：

### 1. 使用条件运算符

条件运算符可以根据条件的真假来选择返回不同的值。可以利用条件运算符的短路特性来实现短路语义。

```lean
example : (p ∨ q) → (q ∨ p) := λ h, (λ h₁, or.inr h₁) (λ h₂, or.inl h₂) h
```

这里，`(λ h₁, or.inr h₁)` 是 `p ∨ q` 为真时的结果，`(λ h₂, or.inl h₂)` 是 `p ∨ q` 为假时的结果。

### 2. 使用 `by_cases` 引理

`by_cases` 引理允许我们在 Coq 中进行分情况讨论。在 Lean 中，我们可以使用 `by_cases` 来实现短路语义。

```lean
example : (p ∨ q) → (q ∨ p) :=
begin
  intro h,
  by_cases hp : p,
  { exact or.inr hp },
  { exact or.inl (classical.by_contradiction (λ hnq, hp (or.inl hnq))) }
end
```

在这里，我们首先使用 `intro h` 引入假设 `h : p ∨ q`。然后使用 `by_cases` 引理进行分情况讨论，引入两个附加的假设 `hp : p` 和 `hp : ¬p`。在第一个情况下，我们可以使用 `exact or.inr hp` 返回 `q ∨ p` 的证明。在第二个情况下，我们使用 `classical.by_contradiction` 引入一个假设 `hnq`，通过推理得到矛盾，并最终返回 `or.inl (classical.by_contradiction (λ hnq, hp (or.inl hnq)))` 来证明 `q ∨ p`。

```lean
# def isGreaterThan0 (x : Nat) : IO Bool := do
#  IO.println s!"x: {x}"
#  return x > 0

def f1 (x y : Nat) : IO Unit := do
  if (<- isGreaterThan0 x <&&> isGreaterThan0 y) then
    IO.println s!"{x} and {y} are greater than 0"
  else
    pure ()

-- `<&&>` is the effectful version of `&&`
-- Given `x y : IO Bool`, `x <&&> y` : m Bool`
-- It only executes `y` if `x` returns `true`.

#eval f1 0 10
-- value: 0
#eval f1 1 10
-- value: 1
-- value: 10
-- 1 and 10 are greater than 0

def f2 (x y : Nat) : IO Unit := do
  if (<- isGreaterThan0 x) then
    if (<- isGreaterThan0 y) then
      IO.println s!"{x} and {y} are greater than 0"
    else
      pure ()
  else
    pure ()
```

## “if-then” 表示法

在 `do` DSL 中，我们可以使用 `if c then action` 的简写形式来表示 `if c then action else pure ()`。下面是使用这种简写形式的 `f2` 方法。

```haskell
f2 :: Int -> IO Int
f2 x = do
  y <- if x > 0 then action  -- if-then shorthand
       else pure 0
  pure (y + 1)
```

在上面的例子中，我们使用 `if x > 0 then action` 来代替 `if x > 0 then action else pure 0`。

```lean
# def isGreaterThan0 (x : Nat) : IO Bool := do
#  IO.println s!"x: {x}"
#  return x > 0

def f2 (x y : Nat) : IO Unit := do
  if (<- isGreaterThan0 x) then
    if (<- isGreaterThan0 y) then
      IO.println s!"{x} and {y} are greater than 0"
```

## 重新赋值

在编写有副作用的代码时，很自然地会思考命令式的方式。
比如，假设我们想要创建一个空数组 `xs`，
如果某个条件成立，就添加 `0`，如果另一个条件成立，就添加 `1`，
然后打印出这个数组。在下面的例子中，我们使用变量“屏蔽”的技巧来模拟这种“更新”。

```lean
def f (b1 b2 : Bool) : IO Unit := do
  let xs := #[]
  let xs := if b1 then xs.push 0 else xs
  let xs := if b2 then xs.push 1 else xs
  IO.println xs

#eval f true true
-- #[0, 1]
#eval f false true
-- #[1]
#eval f true false
-- #[0]
#eval f false false
-- #[]
```

我们可以使用元组来模拟对多个变量进行更新。

在编程中，元组是一种有序的、不可变的数据结构。使用元组，可以将多个值组合在一起，并将它们作为一个整体进行处理。

当我们需要在一个操作中更新多个变量时，可以使用元组来模拟这个过程。假设我们有两个变量 a 和 b，我们想要通过一个操作分别更新它们的值。我们可以使用元组来将 a 和 b 组合在一起，然后对元组进行操作。

在 Python 中，我们可以使用元组解构的方式来将元组拆分为多个变量。例如，假设有一个元组 `t = (1, 2)`，我们可以使用以下方式将元组拆分为两个变量：

```
a, b = t
```

然后我们可以对变量 a 和 b 进行更新。例如，我们可以将 a 和 b 分别增加 1：

```
a += 1
b += 1
```

最后，我们可以使用元组构造的方式将 a 和 b 组合在一起，得到更新后的元组：

```
t = (a, b)
```

通过使用元组来模拟同时更新多个变量的操作，我们可以简化代码并提高可读性。这在某些情况下非常有用，特别是当我们需要保持多个变量之间的相关性时。

```lean
def f (b1 b2 : Bool) : IO Unit := do
  let xs := #[]
  let ys := #[]
  let (xs, ys) := if b1 then (xs.push 0, ys) else (xs, ys.push 0)
  let (xs, ys) := if b2 then (xs.push 1, ys) else (xs, ys.push 1)
  IO.println s!"xs: {xs}, ys: {ys}"

#eval f true false
-- xs: #[0], ys: #[1]
```

我们还可以使用 *连接点*（join-points）来模拟上面的控制流程。
连接点是一个始终尾调用和完全应用的 `let` 语句。
Lean 编译器使用 `goto` 来实现连接点。
下面是使用连接点的相同示例。

```lean
def f (b1 b2 : Bool) : IO Unit := do
  let jp1 xs ys := IO.println s!"xs: {xs}, ys: {ys}"
  let jp2 xs ys := if b2 then jp1 (xs.push 1) ys else jp1 xs (ys.push 1)
  let xs := #[]
  let ys := #[]
  if b1 then jp2 (xs.push 0) ys else jp2 xs (ys.push 0)

#eval f true false
-- xs: #[0], ys: #[1]
```

你可以使用 join-point 来捕获复杂的控制流。`do` DSL 提供了变量重新赋值的功能，使得编写这种代码变得更加方便。在下面的例子中，`let mut xs := #[]` 中的 `mut` 修饰符表示变量 `xs` 可以被重新赋值。该示例包含两个重新赋值 `xs := xs.push 0` 和 `xs := xs.push 1`。使用 join-point 进行编译这些重新赋值操作，没有任何隐藏的状态被更新。

```lean
def f (b1 b2 : Bool) : IO Unit := do
  let mut xs := #[]
  if b1 then xs := xs.push 0
  if b2 then xs := xs.push 1
  IO.println xs

#eval f true true
-- #[0, 1]
```

符号 `x <- action` 将 `x` 重新赋值为执行 action 后的结果。它等同于 `x := (<- action)`

## 迭代

`do` 领域特定语言提供了一个统一的符号来迭代遍历数据结构。以下是一些例子。

```lean
def sum (xs : Array Nat) : IO Nat := do
  let mut s := 0
  for x in xs do
    IO.println s!"x: {x}"
    s := s + x
  return s

#eval sum #[1, 2, 3]
-- x: 1
-- x: 2
-- x: 3
-- 6

-- We can write pure code using the `Id.run <| do` DSL too.
def sum' (xs : Array Nat) : Nat := Id.run <| do
  let mut s := 0
  for x in xs do
    s := s + x
  return s

#eval sum' #[1, 2, 3]
-- 6

def sumEven (xs : Array Nat) : IO Nat := do
  let mut s := 0
  for x in xs do
    if x % 2 == 0 then
      IO.println s!"x: {x}"
      s := s + x
  return s

#eval sumEven #[1, 2, 3, 6]
-- x: 2
-- x: 6
-- 8

def splitEvenOdd (xs : List Nat) : IO Unit := do
  let mut evens := #[]
  let mut odds  := #[]
  for x in xs do
    if x % 2 == 0 then
      evens := evens.push x
    else
      odds := odds.push x
  IO.println s!"evens: {evens}, odds: {odds}"

#eval splitEvenOdd [1, 2, 3, 4]
-- evens: #[2, 4], odds: #[1, 3]

def findNatLessThan (x : Nat) (p : Nat → Bool) : IO Nat := do
  -- [:x] is notation for the range [0, x)
  for i in [:x] do
    if p i then
      return i -- `return` from the `do` block
  throw (IO.userError "value not found")

#eval findNatLessThan 10 (fun x => x > 5 && x % 4 == 0)
-- 8

def sumOddUpTo (xs : List Nat) (threshold : Nat) : IO Nat := do
  let mut s := 0
  for x in xs do
    if x % 2 == 0 then
      continue -- it behaves like the `continue` statement in imperative languages
    IO.println s!"x: {x}"
    s := s + x
    if s > threshold then
      break -- it behaves like the `break` statement in imperative languages
  IO.println s!"result: {s}"
  return s

#eval sumOddUpTo [2, 3, 4, 11, 20, 31, 41, 51, 107] 40
-- x: 3
-- x: 11
-- x: 31
-- result: 45
-- 45
```

# LEAN 定理证明
#### 作者：John Doe

这篇论文介绍了使用 LEAN 证明助手来证明定理的过程。

## 引言

在数学和计算机科学中，证明某个命题的可靠性是非常重要的。在过去，传统的证明方法通常依赖于人类的直觉和演绎推理。然而，由于人类的主观性和错误的概率，这种方法并不总是可靠的。

近年来，基于计算机的定理证明工具逐渐成为证明定理的首选方法。这些工具使用形式化的逻辑和严格的推理规则，通过计算机自动检查证明的每一步是否正确。这种方法大大提高了证明的可靠性和可复制性。

本文将介绍 LEAN，一种基于依赖类型理论的定理证明助手。我们将通过一个简单的例子来演示 LEAN 的用法和优势。

## 背景

LEAN 是由计算机科学家 Leonardo de Moura 开发的一种基于依赖类型理论的定理证明助手。LEAN 提供了一种强大的语言和工具，使得用户可以表达和证明复杂的数学命题和计算机科学问题。

LEAN 的核心思想是将证明问题转化为类型检查问题。用户可以使用 LEAN 提供的类型和推理规则来构建证明的过程。LEAN 使用一种类似于函数式编程的方式来表示和操作证明。用户可以使用 LEAN 提供的语法和库来定义和操纵数学对象和证明构造。

## 定理证明的步骤

下面是使用 LEAN 证明助手证明定理的一般步骤：

1. 定义命题和假设：首先，我们需要明确我们要证明的命题和所使用的假设。在 LEAN 中，我们可以使用 `theorem`、`lemma` 或 `example` 语法来定义命题和假设。

2. 构造证明过程：接下来，我们需要使用 LEAN 提供的语法和规则来构建证明的过程。这包括使用引理和推理规则，以及定义和操作中间结果。

3. 检查证明的正确性：在构建证明的过程中，LEAN 会自动检查每一步的正确性。如果一个步骤是错误的或不完整的，LEAN 将提供相应的错误信息。

4. 完成证明和生成证明文档：一旦 LEAN 检查通过，我们就可以认为定理是被证明的。此时，我们可以将证明导出为文档并分享给他人。

## 一个简单的例子

为了演示 LEAN 的用法和优势，我们将使用一个简单的例子来证明自然数的加法满足交换律。我们首先定义加法运算和自然数类型，然后使用归纳法来证明交换律。

```LEAN
theorem nat_add_comm (n m : ℕ) : n + m = m + n :=
  nat.rec_on m
    (by simp)
    (λ m' ih, by simp [add_comm, ih])
```

在上面的例子中，我们使用 `theorem` 语法来定义一个定理。我们定义了一个参数为 `n` 和 `m` 的命题，即 `n + m = m + n`。然后我们使用归纳法分别对 `m` 进行推理。在基本情况下，我们使用 `simp` 规则来简化表达式。在归纳步骤中，我们使用 `add_comm` 引理和递归假设 `ih` 来推理。

## 结论

通过 LEAN 定理证明助手，我们可以以一种形式化和严格的方式来证明数学和计算机科学中的定理。LEAN 提供了一种强大的语言和工具，使得用户可以轻松地构建和检查证明过程。通过使用 LEAN，我们可以大大提高证明的可靠性和可复制性。

本文只是对 LEAN 定理证明助手的简要介绍。LEARN 提供了更多的功能和库，以及丰富的文档和社区支持。如果你对 LEAN 定理证明助手感兴趣，可以进一步学习和探索相关资料。

```lean
def showUserInfo (getUsername getFavoriteColor : IO (Option String)) : IO Unit := do
  let some n ← getUsername | IO.println "no username!"
  IO.println s!"username: {n}"
  let some c ← getFavoriteColor | IO.println "user didn't provide a favorite color!"
  IO.println s!"favorite color: {c}"

-- username: JohnDoe
-- favorite color: red
#eval showUserInfo (pure <| some "JohnDoe") (pure <| some "red")

-- no username
#eval showUserInfo (pure none) (pure <| some "purple")

-- username: JaneDoe
-- user didn't provide a favorite color
#eval showUserInfo (pure <| some "JaneDoe") (pure none)
```

## If-let

在 `do` 块中，用户可以使用 `if let` 模式来解构操作：

```lean
def tryIncrement (getInput : IO (Option Nat)) : IO (Except String Nat) := do
  if let some n ← getInput
  then return Except.ok n.succ
  else return Except.error "argument was `none`"

-- Except.ok 2
#eval tryIncrement (pure <| some 1)

-- Except.error "argument was `none`"
#eval tryIncrement (pure <| none)
```

## 模式匹配

TODO

## Monad（单子）

TODO

## ReaderT

TODO

## StateT

TODO

## StateRefT

TODO

## ExceptT

TODO

## MonadLift 和自动提升

TODO