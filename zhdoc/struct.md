# 结构体

结构体是归纳数据类型的一种特殊情况。它只有一个构造函数，并且不是递归的。
与 `inductive` 命令类似，`structure` 命令引入了一个同名的命名空间。
其一般形式如下：

```
structure <name> <parameters> <parent-structures> where
  <constructor-name> :: <fields>
```

大部分部分都是可选的。这是我们的第一个例子。

```lean
structure Point (α : Type u) where
  x : α
  y : α
```

在上面的例子中，没有提供构造函数的名称。因此，构造函数被 Lean 命名为 `mk`。
类型为 ``Point`` 的值可以使用 `Point.mk a b` 或 `{ x := a, y := b : Point α }` 来创建。当已知期望的类型时，后者可以简写为 `{ x := a, y := b }`。
点的字段 ``p`` 可以使用 ``Point.x p`` 和 ``Point.y p`` 来访问。您还可以使用更紧凑的符号 `p.x` 和 `p.y` 作为 `Point.x p` 和 `Point.y p` 的简写。

```lean
# structure Point (α : Type u) where
#  x : α
#  y : α
#check Point
#check Point       -- Type u -> Type u
#check @Point.mk   -- {α : Type u} → α → α → Point α
#check @Point.x    -- {α : Type u} → Point α → α
#check @Point.y    -- {α : Type u} → Point α → α

#check Point.mk 10 20                   -- Point Nat
#check { x := 10, y := 20 : Point Nat } -- Point Nat

def mkPoint (a : Nat) : Point Nat :=
  { x := a, y := a }

#eval (Point.mk 10 20).x                   -- 10
#eval (Point.mk 10 20).y                   -- 20
#eval { x := 10, y := 20 : Point Nat }.x   -- 10
#eval { x := 10, y := 20 : Point Nat }.y   -- 20

def addXY (p : Point Nat) : Nat :=
  p.x + p.y

#eval addXY { x := 10, y := 20 }    -- 30
```

在 `{ ... }` 的记法中，如果字段在不同行上，逗号 `,` 是可选的。

```lean
# structure Point (α : Type u) where
#  x : α
#  y : α
def mkPoint (a : Nat) : Point Nat := {
  x := a
  y := a
}
```

你也可以使用 `where` 来代替 `:= { ... }`。

```lean
# structure Point (α : Type u) where
#  x : α
#  y : α
def mkPoint (a : Nat) : Point Nat where
  x := a
  y := a
```

这里是关于我们的 `Point` 类型的一些简单定理。

```lean
# structure Point (α : Type u) where
#  x : α
#  y : α
theorem ex1 (a b : α) : (Point.mk a b).x = a :=
  rfl

theorem ex2 (a b : α) : (Point.mk a b).y = b :=
  rfl

theorem ex3 (a b : α) : Point.mk a b = { x := a, y := b } :=
  rfl
```

点表示法不仅方便地访问结构的投影，还可以应用具有相同名称的命名空间中定义的函数。
如果 ``p`` 的类型是 ``Point``，那么表达式 ``p.foo`` 将被解释为 ``Point.foo p``，假设 ``foo`` 的第一个参数的类型为 ``Point``。
因此，下面的示例中，表达式 ``p.add q`` 是 ``Point.add p q`` 的简写形式。

```
p.add -> Point.add p q
```

```lean
structure Point (α : Type u) where
  x : α
  y : α

def Point.add (p q : Point Nat) : Point Nat :=
  { x := p.x + q.x, y := p.y + q.y }

def p : Point Nat := Point.mk 1 2
def q : Point Nat := Point.mk 3 4

#eval (p.add q).x  -- 4
#eval (p.add q).y  -- 6
```

在引入类型类之后，我们展示了如何定义一个函数，比如 ``add``，使其可以对 ``Point α`` 的元素而不仅仅是 ``Point Nat`` 进行通用操作，假设 ``α`` 有一个关联的加法运算。

更一般地说，给定一个表达式 ``p.foo x y z``，Lean 将在类型为 ``Point`` 的第一个参数位置插入 ``p``。
例如，在下面对标量乘法的定义中，``p.smul 3`` 被解释为 ``Point.smul 3 p``。

```lean
structure Point (α : Type u) where
  x : α
  y : α

def Point.smul (n : Nat) (p : Point Nat) :=
  Point.mk (n * p.x) (n * p.y)

def p : Point Nat :=
  Point.mk 1 2

#eval (p.smul 3).x -- 3
#eval (p.smul 3).y -- 6
```

## 继承

我们可以通过添加新的字段来扩展现有的结构。这个特性使我们能够模拟一种形式的继承。

```lean
structure Point (α : Type u) where
  x : α
  y : α

inductive Color where
  | red
  | green
  | blue

structure ColorPoint (α : Type u) extends Point α where
  color : Color

#check { x := 10, y := 20, color := Color.red : ColorPoint Nat }
-- { toPoint := { x := 10, y := 20 }, color := Color.red }
```

上述 `check` 命令的输出显示了 Lean 如何编码继承和多继承。
Lean 使用字段来表示每个父结构。

```lean
structure Foo where
  x : Nat
  y : Nat

structure Boo where
  w : Nat
  z : Nat

structure Bla extends Foo, Boo where
  bit : Bool

#check Bla.mk -- Foo → Boo → Bool → Bla
#check Bla.mk { x := 10, y := 20 } { w := 30, z := 40 } true
#check { x := 10, y := 20, w := 30, z := 40, bit := true : Bla }
#check { toFoo := { x := 10, y := 20 },
         toBoo := { w := 30, z := 40 },
         bit := true : Bla }

theorem ex :
    Bla.mk { x := x, y := y } { w := w, z := z } b
    =
    { x := x, y := y, w := w, z := z, bit := b } :=
  rfl
```

## 默认字段值

在声明新的结构时，您可以为字段分配默认值。

```lean
structure Person :=
(name : string := "Unknown")
(age : ℕ := 0)
```

上述代码定义了一个名为 `Person` 的结构体，它有两个字段：`name` 和 `age`。在声明这些字段的同时，通过 `:=` 运算符为它们分配了默认值。

如果在创建 `Person` 类型的实例时没有提供指定字段的值，那么默认值将会被使用。例如，如果我们创建一个没有指定任何字段值的 `Person` 实例：

```lean
def p : Person := ⟨⟩
```

那么 `p` 实例的 `name` 字段将被设置为 "Unknown"，`age` 字段将被设置为 0。

您也可以自定义所需的默认值，只需要在声明结构体时将其赋给字段即可。

```lean
inductive MessageSeverity
  | error | warning

structure Message where
  fileName : String
  pos      : Option Nat      := none
  severity : MessageSeverity := MessageSeverity.error
  caption  : String          := ""
  data     : String

def msg1 : Message :=
  { fileName := "foo.lean", data := "failed to import file" }

#eval msg1.pos      -- none
#eval msg1.fileName -- "foo.lean"
#eval msg1.caption  -- ""
```

当扩展一个结构体时，不仅可以添加新的字段，还可以为现有字段提供新的默认值。

```lean
# inductive MessageSeverity
#  | error | warning
# structure Message where
#  fileName : String
#  pos      : Option Nat      := none
#  severity : MessageSeverity := MessageSeverity.error
#  caption  : String          := ""
#  data     : String
structure MessageExt extends Message where
  timestamp : Nat
  caption   := "extended" -- new default value for field `caption`

def msg2 : MessageExt where
  fileName  := "bar.lean"
  data      := "error at initialization"
  timestamp := 10

#eval msg2.fileName  -- "bar.lean"
#eval msg2.timestamp -- 10
#eval msg2.caption   -- "extended"
```

## 更新结构字段

可以使用 `{ <struct-val> with <field> := <new-value>, ... }` 来更新结构字段：

```lean
# structure Point (α : Type u) where
#  x : α
#  y : α
def incrementX (p : Point Nat) : Point Nat := { p with x := p.x + 1 }
```

