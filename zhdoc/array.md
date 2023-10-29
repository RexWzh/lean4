# 数组

`Array` 类型实现了一个 *动态* (也称为可增长的) 数组。
定义如下：

```lean
# namespace hidden
structure Array (α : Type u) where
  data : List α
# end hidden
```

但它的执行时间表示经过了优化，并且类似于C++的 `std::vector<T>` 和Rust的 `Vec<T>`。

Lean类型检查器没有针对减少`Array`的特殊支持。

您可以以多种方式创建数组。您可以通过在`#[` 和 `]` 之间的连续值列表中使用逗号来创建一个小数组，如下面的示例所示。

```lean
#check #[1, 2, 3] -- Array Nat

#check #[] -- Array ?m
```

数组元素的类型是从使用的字面量中推断出来的，并且必须保持一致。

```lean
#check #["hello", "world"] -- Array String

-- The following is not valid
#check_failure #[10, "hello"]
```

回想一下，命令 `#check_failure <term>` 仅在给定的表达式不符合类型时成功。要创建一个大小为 `n` 的数组，其中所有元素都初始化为某个值 `a`，可以使用 `mkArray`。

```lean
#eval mkArray 5 'a'
-- #['a', 'a', 'a', 'a', 'a']
```

## 访问元素

你可以通过使用方括号 (`[` 和 `]`) 来访问数组元素。

```lean
def f (a : Array Nat) (i : Fin a.size) :=
  a[i] + a[i]
```

注意索引 `i` 的类型为 `Fin a.size`，即它是小于 `a.size` 的自然数。
也可以写成

```lean
def f (a : Array Nat) (i : Nat) (h  : i < a.size) :=
  a[i] + a[i]
```

括号运算符对空白字符敏感。

```lean
def f (xs : List Nat) : List Nat :=
  xs ++ xs

def as : Array Nat :=
  #[1, 2, 3, 4]

def idx : Fin 4 :=
  2

#eval f [1, 2, 3] -- This is a function application

#eval as[idx] -- This is an array access
```

符号 `a[i]` 有两种变体：`a[i]!` 和 `a[i]?`。在两种情况下，`i` 的类型为 `Nat`。第一种情况下，如果索引 `i` 超出了边界，则会产生 panic 错误消息。而第二种情况下会返回一个 `Option` 类型的值。

```lean
#eval #['a', 'b', 'c'][1]?
-- some 'b'
#eval #['a', 'b', 'c'][5]?
-- none
#eval #['a', 'b', 'c'][1]!
-- 'b!
```

