# 函数

函数是任何编程语言中程序执行的基本单元。与其他语言一样，Lean 函数有一个名称，可以有参数和接受参数，并且有一个函数体。Lean 还支持将函数作为值处理的函数式编程结构，可以在表达式中使用匿名函数，将函数组合成新的函数，柯里化函数，以及通过函数参数的部分应用隐式定义函数。

你可以使用 `def` 关键字定义函数，后面跟着函数的名称、参数列表、返回类型和函数体。参数列表由一系列以空格分隔的参数组成。对于每个参数，你可以指定一个显式类型。如果你未指定特定的参数类型，编译器将尝试从函数体推断类型。当无法推断时，会返回错误。函数体由一些表达式组成的复合表达式，最后的表达式是返回值。返回类型由冒号和类型组成，是可选的。如果你没有明确指定返回值的类型，编译器将尝试从最后的表达式确定返回类型。

```lean
def f x := x + 1
```

在前面的例子中，函数名为 `f`，参数为 `x`，类型为 `Nat`，函数体为 `x + 1`，返回值的类型为 `Nat`。
下面的例子使用匹配模式定义了阶乘递归函数。

```lean
def fact x :=
  match x with
  | 0   => 1
  | n+1 => (n+1) * fact n

#eval fact 100
```

默认情况下，Lean 只接受全函数。当Lean无法确定一个函数总是终止时，可以使用 `partial` 关键字。

```lean
partial def g (x : Nat) (p : Nat -> Bool) : Nat :=
  if p x then
    x
  else
    g (x+1) p

#eval g 0 (fun x => x > 10)
```

在前面的例子中，只有当存在一个 `y >= x` 使得 `p y` 返回 `true` 时，`g x p` 才会终止。
当然，`g 0 (fun x => false)` 永远不会终止。

然而，`partial` 的使用仅限于返回类型不为空的函数，因此系统的完整性没有受到损害。

```lean,ignore
partial def loop? : α := -- failed to compile partial definition 'loop?', failed to
  loop?                  -- show that type is inhabited and non empty

partial def loop [Inhabited α] : α := -- compiles
  loop

example : True := -- accepted
  loop

example : False :=
  loop -- failed to synthesize instance Inhabited False
```

如果我们能够部分地定义`loop?`，我们就可以用它来证明`False`。

# Lambda 表达式

Lambda 表达式是一个无名函数。
你可以使用 `fun` 关键字来定义 lambda 表达式。Lambda 表达式类似于函数定义，除了分隔参数列表和函数体的`:=`符号外，
还可以使用 `=>` 分隔。和普通函数定义一样，参数类型可以被推断或显式指定，并且 lambda 表达式的返回类型可以从体中的最后一个表达式的类型推断出来。

```lean
def twice (f : Nat -> Nat) (x : Nat) : Nat :=
  f (f x)

#eval twice (fun x => x + 1) 3
#eval twice (fun (x : Nat) => x * 2) 3

#eval List.map (fun x => x + 1) [1, 2, 3]
-- [2, 3, 4]

#eval List.map (fun (x, y) => x + y) [(1, 2), (3, 4)]
-- [3, 7]
```

# 简化的 lambda 表达式的语法糖

可以使用括号和 `·` 作为占位符定义简单函数。

```lean
#check (· + 1)
-- fun a => a + 1
#check (2 - ·)
-- fun a => 2 - a
#eval [1, 2, 3, 4, 5].foldl (· * ·) 1
-- 120

def h (x y z : Nat) :=
  x + y + z

#check (h · 1 ·)
-- fun a b => h a 1 b

#eval [(1, 2), (3, 4), (5, 6)].map (·.1)
-- [1, 3, 5]
```

在前面的例子中，`(·.1)` 这个表达式是 `fun x => x.1` 的语法糖。

# 管道操作

管道操作允许函数调用被链式地连接在一起作为连续的操作。管道操作的工作原理如下所示：

```lean
def add1 x := x + 1
def times2 x := x * 2

#eval times2 (add1 100)
#eval 100 |> add1 |> times2
#eval times2 <| add1 <| 100
```

之前的`#eval`命令的结果是202。
前向管道`|>`操作符接受一个函数和一个参数，并返回一个值。
相反，后向管道`<|`操作符接受一个参数和一个函数，并返回一个值。
这些操作符对于减少括号的数量非常有用。

```lean
def add1Times3FilterEven (xs : List Nat) :=
  List.filter (· % 2 == 0) (List.map (· * 3) (List.map (· + 1) xs))

#eval add1Times3FilterEven [1, 2, 3, 4]
-- [6, 12]

-- Define the same function using pipes
def add1Times3FilterEven' (xs : List Nat) :=
  xs |> List.map (· + 1) |> List.map (· * 3) |> List.filter (· % 2 == 0)

#eval add1Times3FilterEven' [1, 2, 3, 4]
-- [6, 12]
```

Lean 还支持操作符 `|>.`，它将前向管道 `|>` 操作符和 `.` 字段表示法结合在一起。

```lean
-- Define the same function using pipes
def add1Times3FilterEven'' (xs : List Nat) :=
  xs.map (· + 1) |>.map (· * 3) |>.filter (· % 2 == 0)

#eval add1Times3FilterEven'' [1, 2, 3, 4]
-- [6, 12]
```

对于熟悉 Haskell 编程语言的用户来说，Lean 还支持将 `f $ a` 表示为向后传递符号 `f <| a` 的记法。