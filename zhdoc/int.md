# 整数

`Int` 类型表示任意精度的整数。不会发生溢出。

```lean
#eval (100000000000000000 : Int) * 200000000000000000000 * 1000000000000000000000
```

回顾一下，如果不存在类型约束，那么非负数字被认为是`Nat`类型。

```lean
#check 1 -- Nat
#check -1 -- Int
#check (1:Int) -- Int
```

对于 `Int` 类型，操作符 `/` 实现了整数除法。

```lean
#eval -10 / 4 -- -2
```

与`Nat`类似，`Int`的内部表示也经过了优化。小整数使用一个机器字来表示。大整数使用[GMP](https://gmplib.org/manual/)数字来实现。我们建议您仅在性能关键的代码中使用固定精度数值类型。

Lean内核在类型检查期间没有特殊的支持来减少`Int`。然而，由于`Int`的定义是

```lean
# namespace hidden
inductive Int : Type where
  | ofNat   : Nat → Int
  | negSucc : Nat → Int
# end hidden
```

类型检查器将能够高效地通过依赖于对 `Nat` 的特殊支持来简化 `Int` 表达式。

```lean
theorem ex : -2000000000 * 1000000000 = -2000000000000000000 :=
 rfl
```

