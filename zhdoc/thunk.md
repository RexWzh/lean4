# Thunks、Tasks 和线程

`Thunk` 的定义如下：

```lean
# namespace Ex
# universe u
structure Thunk (α : Type u) : Type u where
  fn : Unit → α
# end Ex
```

`Thunk`封装了一个未求值的计算。也就是说，`Thunk`存储了计算值的方式。Lean运行时对`Thunk`有特殊的支持。在它们第一次计算后，运行时会缓存它们的值。这个特性在实现延迟列表等数据结构时非常有用。下面是一个使用`Thunk`的简单例子。

```lean
def fib : ℕ → ℕ
| 0 := 0
| 1 := 1
| (n+2) := (fib n) + (fib (n+1))

#reduce fib 5

def fib_t : ℕ → thunk ℕ
| 0 := 0
| 1 := 1
| (n+2) := λ _, (fib_t n).get () + (fib_t (n+1)).get ()

lemma fib_eq : ∀ n : ℕ, (fib_t n).get () = fib n :=
begin
  intro n,
  induction n with d hd,
  { simp },
  { cases d; simp [fib_eq, hd] }
end

#reduce (fib_t 5).get ()
```

在这个例子中，我们定义了一个 `fib` 函数来计算斐波那契数列中的第 `n` 项。然后我们定义了一个 `fib_t` 函数，它与 `fib` 函数非常相似，但返回的是一个 `thunk`。我们使用 `thunk` 的 `get` 函数来强制求值并获取结果。最后，我们使用归纳法证明了 `fib_t` 的结果与 `fib` 函数相等，并通过调用 `(fib_t 5).get ()` 来获取斐波那契数列的第 5 项的值。

```lean
def fib : Nat → Nat
  | 0   => 0
  | 1   => 1
  | x+2 => fib (x+1) + fib x

def f (c : Bool) (x : Thunk Nat) : Nat :=
  if c then
    x.get
  else
    0

def g (c : Bool) (x : Nat) : Nat :=
  f c (Thunk.mk (fun _ => fib x))

#eval g false 1000
```

上述的函数 `f` 使用 `x.get` 来计算 `Thunk` `x`。表达式 `Thunk.mk (fun _ => fib x)` 创建一个用于计算 `fib x` 的 `Thunk`。需要注意的是，`fib` 是一个非常简单的计算斐波那契数的函数，计算 `fib 1000` 需要耗费非常长的时间。然而，我们的测试能够立即终止，因为当 `c` 为 `false` 时，`Thunk` 不会被计算。在 Lean 中，任意类型 `a` 都可以映射到 `Thunk a`。你可以将上述的函数 `g` 编写为：

```lean
# def fib : Nat → Nat
#  | 0   => 0
#  | 1   => 1
#  | x+2 => fib (x+1) + fib x
# def f (c : Bool) (x : Thunk Nat) : Nat :=
#  if c then
#    x.get
#  else
#    0
def g (c : Bool) (x : Nat) : Nat :=
  f c (fib x)

#eval g false 1000
```

在下面的示例中，我们使用宏 `dbg_trace` 来演示 Lean 运行时是如何缓存 `Thunk` 计算的值的。
需要注意的是，宏 `dbg_trace` 仅适用于调试目的。

```lean
def add1 (x : Nat) : Nat :=
  dbg_trace "add1: {x}"
  x + 1

def double (x : Thunk Nat) : Nat :=
  x.get + x.get

def triple (x : Thunk Nat) : Nat :=
  double x + x.get

def test (x : Nat) : Nat :=
  triple (add1 x)

#eval test 2
-- add1: 2
-- 9
```

请注意，消息 `add1: 2` 只打印了一次。
现在，考虑在 `Thunk Nat` 的基础上使用 `Unit -> Nat` 的相同示例。

```lean
def add1 (x : Nat) : Nat :=
  dbg_trace "add1: {x}"
  x + 1

def double (x : Unit -> Nat) : Nat :=
  x () + x ()

def triple (x : Unit -> Nat) : Nat :=
  double x + x ()

def test (x : Nat) : Nat :=
  triple (fun _ => add1 x)

#eval test 2
-- add1: 2
-- add1: 2
-- 9
```

现在，消息 `add1: 2` 打印了两次。
它可能使人感到惊讶，因为它打印了两次而不是三次。
正如我们所指出的，`dbg_trace` 是一个仅用于调试目的的宏，而 `add1` 仍然被认为是一个纯函数。
当编译 `double` 时，Lean 编译器会执行公共子表达式消除，并且生成的代码只会执行 `x ()` 一次，而不是两次。
这种转换是安全的，因为 `x: Unit -> Nat` 是纯函数。