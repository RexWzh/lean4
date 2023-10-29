## 类型作为对象

Lean的依赖类型理论之所以扩展了简单类型理论，一个方面是因为类型本身——如``Nat``和``Bool``——是一等公民，也就是说类型本身也是对象。为了将类型视为对象，每个类型本身也必须有一个类型。

```lean
#check Nat               -- Type
#check Bool              -- Type
#check Nat → Bool        -- Type
#check Nat × Bool        -- Type
#check Nat → Nat         -- ...
#check Nat × Nat → Nat
#check Nat → Nat → Nat
#check Nat → (Nat → Nat)
#check Nat → Nat → Bool
#check (Nat → Nat) → Nat
```

我们可以看到上面的每个表达式都是 ``Type`` 类型的对象。我们还可以为类型声明新的常量和构造函数：

```lean
constant α : Type
constant β : Type
constant F : Type → Type
constant G : Type → Type → Type

#check α        -- Type
#check F α      -- Type
#check F Nat    -- Type
#check G α      -- Type → Type
#check G α β    -- Type
#check G α Nat  -- Type
```

确实，我们已经看到了一个类型为 ``Type → Type → Type`` 的函数的例子，即笛卡尔积。



```lean
constant α : Type
constant β : Type

#check Prod α β       -- Type
#check Prod Nat Nat   -- Type
```

这里有另一个例子：给定任意类型 ``α``，类型 ``List α`` 表示类型为 ``α`` 的元素列表的类型。

```lean
constant α : Type

#check List α    -- Type
#check List Nat  -- Type
```

鉴于 Lean 中的每个表达式都有一个类型，很自然地会问：``Type``本身的类型是什么？

```lean
#check Type      -- Type 1
```

我们实际上遇到了 Lean 类型系统中最微妙的一点。Lean 的基础类型系统有一个无限级别的层次结构：

```lean
#check Type     -- Type 1
#check Type 1   -- Type 2
#check Type 2   -- Type 3
#check Type 3   -- Type 4
#check Type 4   -- Type 5
```

将``Type 0``看作是一个 "小" 或 "普通" 类型的宇宙。
``Type 1`` 则是一个更大的类型宇宙，其中包含 ``Type 0`` 作为一个元素，
而``Type 2`` 则是一个更大的类型宇宙，其中包含 ``Type 1`` 作为一个元素。
列表是无限的，所以对于每个自然数 ``n``，都存在一个 ``Type n``。
``Type`` 是对 ``Type 0`` 的缩写：


```lean
#check Type
#check Type 0
```

还有另一种类型的宇宙，叫做``Prop``，具有特殊的属性。

```lean
#check Prop -- Type
```

稍后我们将讨论 *Prop*。

然而，我们希望某些操作能够在类型宇宙上变得 *多态*。例如，对于任何类型 ``α``， ``List α`` 应该是有意义的，无论 ``α`` 存在于哪个类型宇宙中。这就解释了函数 ``List`` 的类型注释：

```lean
#check List    -- Type u_1 → Type u_1
```

在这里，``u_1`` 是一个在类型级别上变动的变量。``#check`` 命令的输出表示，无论 ``α`` 是什么类型的``Type n``，``List α`` 也是 ``Type n`` 类型的。函数 ``Prod`` 同样是多态的：

```lean
#check Prod    -- Type u_1 → Type u_2 → Type (max u_1 u_2)
```

为了定义多态常量和变量，Lean 允许我们使用 `universe` 命令显式地声明宇宙变量：

```
universe u
```

这样就声明了一个叫做 `u` 的宇宙变量。

在 Lean 中，宇宙是类型理论中用来描述层次结构的概念。宇宙将类型分层，每一层都是一个宇宙，更高层的宇宙包含了更低层的宇宙。

有了宇宙变量，我们可以在声明常量和变量时使用这些宇宙变量来指定宇宙层次。

例如，我们可以声明一个类型为 `Type u` 的常量 `A`：

```
constant A : Type u
```

这样就声明了一个叫做 `A` 的常量，它的类型是 `Type u`，其中 `u` 是之前声明的宇宙变量。

使用宇宙变量可以实现多态，我们可以声明一个类型为 `Type (u + 1)` 的变量 `B`：

```
variable B : Type (u + 1)
```

这样就声明了一个叫做 `B` 的变量，它的类型是 `Type (u + 1)`，其中 `u` 是之前声明的宇宙变量。

宇宙变量的主要作用是为了使 Lean 支持多态类型和多态函数，可以灵活地处理不同层次的类型。当我们需要定义不同层次或具有层次化结构的类型时，可以使用宇宙变量来实现这一目的。

```lean
universe u
constant α : Type u
#check α
```

等价地，我们可以写 ``Type _`` 以避免给任意的宇宙命名：

```lean
constant α : Type _
#check α
```

一些 Lean 3 用户使用 `Type*` 来表示 `Type _` 的简写。在 Lean 4 中没有内置的 `Type*` 符号，但你可以使用宏来定义它。

```lean
macro "Type*" : term => `(Type _)

def f (α : Type*) (a : α) := a

def g (α : Type _) (a : α) := a

#check f
#check g
```

我们稍后会解释 `macro` 命令的工作原理。