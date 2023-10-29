# 类型类

类型类被引入作为在函数式编程语言中启用特定上下文的泛型编程的一个有原则的方法。我们首先观察到，如果函数简单地将类型特定的加法实现作为参数并在剩余参数上调用该实现，那么实现一个自适应的多态函数（如加法）将是很容易的。例如，假设我们在 Lean 中声明一个结构来保存加法的实现。

```lean
# namespace Ex
structure Add (a : Type) where
  add : a -> a -> a

#check @Add.add
-- Add.add : {a : Type} → Add a → a → a → a
# end Ex
```

在上面的 Lean 代码中，字段 `add` 的类型是 `Add.add: {α: Type} → Add α → α → α → α`，
花括号表示类型 `α` 是一个隐式参数。我们可以通过如下实现 `double` 函数：

```lean
# namespace Ex
# structure Add (a : Type) where
#  add : a -> a -> a
def double (s : Add a) (x : a) : a :=
  s.add x x

#eval double { add := Nat.add } 10
-- 20

#eval double { add := Nat.mul } 10
-- 100

#eval double { add := Int.add } 10
-- 20

# end Ex
```

注意，你可以通过 `double { add := Nat.add } n` 来将自然数 `n` 倍增。当然，用户手动传递这些实现将非常麻烦。实际上，这将使得 ad-hoc 多态的潜在好处大大减弱。

类型类背后的主要思想是将 `Add a` 这样的参数设为隐式，并通过用户定义的实例数据库自动通过类型类解析过程来合成所需的实例。在 Lean 中，通过将上面的例子中的 `structure` 改为 `class`，`Add.add` 的类型变为

```lean
# namespace Ex
class Add (a : Type) where
  add : a -> a -> a

#check @Add.add
-- Add.add : {a : Type} → [self : Add a] → a → a → a
# end Ex
```

square brackets 中括号表示 `Add a` 类型的参数是一个隐式参数，
也就是说，它应该通过类型类解析来合成。这个版本的 `add` 是
Lean 中类似 Haskell 术语 `add :: Add a => a -> a -> a` 的对应物。
同样地，我们可以通过以下方式注册一个实例：

```lean
# namespace Ex
# class Add (a : Type) where
#  add : a -> a -> a
instance : Add Nat where
  add := Nat.add

# end Ex
```

那么对于 `n : Nat` 和 `m : Nat`，表达式 `Add.add n m` 会触发类型类的解析，解析目标是 `Add Nat`，而类型类解析将会综合出上述的实例。通常情况下，实例可能以复杂的方式依赖于其他实例。例如，您可以声明一个（匿名的）实例，该实例说明如果 `a` 有加法运算，那么 `Array a` 也有加法运算：

```lean
instance [Add a] : Add (Array a) where
  add x y := Array.zipWith x y (· + ·)

#eval Add.add #[1, 2] #[3, 4]
-- #[4, 6]

#eval #[1, 2] + #[3, 4]
-- #[4, 6]
```

请注意，`x + y`是Lean中`Add.add x y`的表示法。

上面的示例演示了如何使用类型类来重载表示法。
现在，我们来探讨另一个应用。我们经常需要某个给定类型的任意元素。
在Lean中，需要注意的是，类型可能没有任何元素。
通常情况下，我们希望定义在“特殊情况”下返回一个任意元素。
例如，当`xs`是类型为`List a`的值时，我们希望表达式`head xs`的类型为`a`。
同样，许多定理在附加条件下成立，即该类型不为空。
例如，如果`a`是一个类型，则只有当`a`不为空时，`exists x : a, x = x`才为真。
标准库定义了一个类型类`Inhabited`，以便让类型类推断推断一个“默认”或者“任意”的元素。
让我们从上面程序的第一步开始，声明一个合适的类：

```lean
# namespace Ex
class Inhabited (a : Type u) where
  default : a

#check @Inhabited.default
-- Inhabited.default : {a : Type u} → [self : Inhabited a] → a
# end Ex
```

注意 `Inhabited.default` 没有任何显式参数。
类 ``Inhabited a`` 的一个元素简单地表示为形式为 ``Inhabited.mk x`` 的表达式，其中 ``x : a``。
投影 ``Inhabited.default`` 使我们能够从 ``Inhabited a`` 的元素中“提取” ``a`` 的一个元素。
现在我们给类添加一些实例：

```lean
# namespace Ex
# class Inhabited (a : Type _) where
#  default : a
instance : Inhabited Bool where
  default := true

instance : Inhabited Nat where
  default := 0

instance : Inhabited Unit where
  default := ()

instance : Inhabited Prop where
  default := True

#eval (Inhabited.default : Nat)
-- 0

#eval (Inhabited.default : Bool)
-- true
# end Ex
```

你可以使用命令 `export` 来为 `Inhabited.default` 创建别名 `default`。

```lean
# namespace Ex
# class Inhabited (a : Type _) where
#  default : a
# instance : Inhabited Bool where
#  default := true
# instance : Inhabited Nat where
#  default := 0
# instance : Inhabited Unit where
#  default := ()
# instance : Inhabited Prop where
#  default := True
export Inhabited (default)

#eval (default : Nat)
-- 0

#eval (default : Bool)
-- true
# end Ex
```

## 链接实例

如果只有这些类型类推断，它并不是那么值得称道；它只是一种在查找表中存储实例列表的机制。
使得类型类推断强大的是可以*链接*实例。也就是说，一个实例声明可以依赖于一个类型类的隐式实例。
这会导致类型类推断通过递归地链接实例，必要时进行回溯，类似于 Prolog 中的搜索。

例如，下面的定义显示，如果两个类型 ``a`` 和 ``b`` 被 inhabit，则它们的乘积也是 inhabit 的：

```lean
instance [Inhabited a] [Inhabited b] : Inhabited (a × b) where
  default := (default, default)
```

在之前的实例声明中添加了这个，类型类实例能够推断出，例如，``Nat × Bool`` 的默认元素：

```lean
# namespace Ex
# class Inhabited (a : Type u) where
#  default : a
# instance : Inhabited Bool where
#  default := true
# instance : Inhabited Nat where
#  default := 0
# opaque default [Inhabited a] : a :=
#  Inhabited.default
instance [Inhabited a] [Inhabited b] : Inhabited (a × b) where
  default := (default, default)

#eval (default : Nat × Bool)
-- (0, true)
# end Ex
```

类似地，我们可以使用适当的常数函数来定义类型函数的元素：

```lean
instance [Inhabited b] : Inhabited (a -> b) where
  default := fun _ => default
```

作为练习，尝试为其他类型定义默认实例，例如 `List` 和 `Sum` 类型。

在 Lean 标准库中，有一个名为 `inferInstance` 的定义。它的类型是 `{α : Sort u} → [i : α] → α`，在期望类型是一个实例时，触发类型类解析过程时非常有用。

```lean
#check (inferInstance : Inhabited Nat) -- Inhabited Nat

def foo : Inhabited (Nat × Nat) :=
  inferInstance

theorem ex : foo.default = (default, default) :=
  rfl
```

你可以使用 `#print` 命令来检查 `inferInstance` 函数的实现：

```lean
def inferInstance {α : Sort u} [i : inhabited α] : α :=
inhabited.default
#print inferInstance
```

这将打印出 `inferInstance` 函数的定义内容和类型签名。

```lean
#print inferInstance
```

## ToString

多态方法 `toString` 的类型为 `{α : Type u} → [ToString α] → α → String`。你需要为自己的类型实现该方法，并使用链式调用将复杂的值转换为字符串。Lean 已经提供了大多数内建类型的 `ToString` 实例。

```lean
structure Person where
  name : String
  age  : Nat

instance : ToString Person where
  toString p := p.name ++ "@" ++ toString p.age

#eval toString { name := "Leo", age := 542 : Person }
#eval toString ({ name := "Daniel", age := 18 : Person }, "hello")
```

## 数字

在 Lean 中，数字是多态的。你可以使用一个数字（比如 `2`）表示任何实现了类型类 `OfNat` 的类型的元素。

```lean
structure Rational where
  num : Int
  den : Nat
  inv : den ≠ 0

instance : OfNat Rational n where
  ofNat := { num := n, den := 1, inv := by decide }

instance : ToString Rational where
  toString r := s!"{r.num}/{r.den}"

#eval (2 : Rational) -- 2/1

#check (2 : Rational) -- Rational
#check (2 : Nat)      -- Nat
```

LEAN的关于`(2: Nat)`和`(2: Rational)`的解释如下：
- 对于`(2: Nat)`，其展开形式为`OfNat.ofNat Nat 2 (instOfNatNat 2)`。我们称在这个展开形式中出现的数字`2`为*原始*自然数。您可以使用宏`nat_lit 2`来表示原始自然数`2`。
- 对于`(2: Rational)`，其展开形式为`OfNat.ofNat Rational 2 (instOfNatRational 2)`。我们同样将在展开形式中出现的数字`2`称为*原始*自然数。您同样可以使用宏`nat_lit 2`来表示原始自然数`2`。

```lean
#check nat_lit 2  -- Nat
```

原始自然数*不是*多态的。

`OfNat` 实例是基于数字的参数化的。因此，你可以为特定的数字定义实例。
第二个参数通常是一个变量，就像上面的例子中一样，或者是一个*原始*自然数。

```lean
class Monoid (α : Type u) where
  unit : α
  op   : α → α → α

instance [s : Monoid α] : OfNat α (nat_lit 1) where
  ofNat := s.unit

def getUnit [Monoid α] : α :=
  1
```

由于许多用户在定义`OfNat`实例时忘记使用`nat_lit`，Lean还接受未使用`nat_lit`的`OfNat`实例声明。因此，以下代码也是被接受的。

```lean
class Monoid (α : Type u) where
  unit : α
  op   : α → α → α

instance [s : Monoid α] : OfNat α 1 where
  ofNat := s.unit

def getUnit [Monoid α] : α :=
  1
```

## 输出参数

默认情况下，当项 `T` 已知且不包含缺失部分时，Lean 只尝试合成一个 `Inhabited T` 的实例。下面的命令会产生错误信息 "failed to create type class instance for `Inhabited (Nat × ?m.1499)`" ，因为该类型有一个缺失部分（即 `_`）。

```lean
# -- FIXME: should fail
#check (inferInstance : Inhabited (Nat × _))
```

你可以将类型类 `Inhabited` 的参数视为类型类合成器的 *输入* 值。
当一个类型类具有多个参数时，你可以将其中一些标记为输出参数。
即使这些参数存在缺失部分，Lean 也会启动类型类合成器。
在下面的示例中，我们使用输出参数来定义一个 *异构* 多态乘法。

```lean
# namespace Ex
class HMul (α : Type u) (β : Type v) (γ : outParam (Type w)) where
  hMul : α → β → γ

export HMul (hMul)

instance : HMul Nat Nat Nat where
  hMul := Nat.mul

instance : HMul Nat (Array Nat) (Array Nat) where
  hMul a bs := bs.map (fun b => hMul a b)

#eval hMul 4 3           -- 12
#eval hMul 4 #[2, 3, 4]  -- #[8, 12, 16]
# end Ex
```

参数 `α` 和 `β` 被视为输入参数，而 `γ` 是输出参数。
给定一个应用程序 `hMul a b`，在知道 `a` 和 `b` 的类型之后，类型类合成器被调用，从输出参数 `γ` 中获得结果类型。
在上面的示例中，我们定义了两个实例。第一个是自然数的同类乘法。第二个是数组的标量乘法。
注意，你可以将实例链接起来并将第二个实例泛化。

```lean
# namespace Ex
class HMul (α : Type u) (β : Type v) (γ : outParam (Type w)) where
  hMul : α → β → γ

export HMul (hMul)

instance : HMul Nat Nat Nat where
  hMul := Nat.mul

instance : HMul Int Int Int where
  hMul := Int.mul

instance [HMul α β γ] : HMul α (Array β) (Array γ) where
  hMul a bs := bs.map (fun b => hMul a b)

#eval hMul 4 3                    -- 12
#eval hMul 4 #[2, 3, 4]           -- #[8, 12, 16]
#eval hMul (-2) #[3, -1, 4]       -- #[-6, 2, -8]
#eval hMul 2 #[#[2, 3], #[0, 4]]  -- #[#[4, 6], #[0, 8]]
# end Ex
```

无论何时你拥有一个实例`HMul α β γ`，你就能在类型为`Array β`的数组上使用我们新的纯量数组乘法实例，该实例接受类型为`α`的纯量作为输入值。在上一个`#eval`中，注意到该实例在一个数组的数组上被使用了两次。

## 默认实例

在类`HMul`中，参数`α`和`β`被视为输入值。因此，在这两种类型未知之前，类型类合成不会开始。这可能经常过于限制。

```lean
# namespace Ex
class HMul (α : Type u) (β : Type v) (γ : outParam (Type w)) where
  hMul : α → β → γ

export HMul (hMul)

instance : HMul Int Int Int where
  hMul := Int.mul

def xs : List Int := [1, 2, 3]

# -- TODO: fix error message
-- Error "failed to create type class instance for HMul Int ?m.1767 (?m.1797 x)"
-- #check fun y => xs.map (fun x => hMul x y)
# end Ex
```

Lean 并未合成对象 `HMul` ，因为 `y` 的类型尚未提供。
然而，在这种情况下，我们自然可以假设 `y` 和 `x` 的类型应该相同。
我们可以使用*默认实例*来实现这一点。

```lean
# namespace Ex
class HMul (α : Type u) (β : Type v) (γ : outParam (Type w)) where
  hMul : α → β → γ

export HMul (hMul)

@[default_instance]
instance : HMul Int Int Int where
  hMul := Int.mul

def xs : List Int := [1, 2, 3]

#check fun y => xs.map (fun x => hMul x y)  -- Int -> List Int
# end Ex
```

通过给上述实例添加 `default_instance` 属性标签，我们指示 Lean 在待定的类型类综合问题中使用此实例。
实际的 Lean 实现为算术运算符定义了同质和异质类。
此外，`a+b`、`a*b`、`a-b`、`a/b` 和 `a%b` 是异质版本的符号表示方式。
实例 `OfNat Nat n` 是 `OfNat` 类的默认实例（优先级为 `100`）。这就是为什么当目标类型未知时，数字 `2` 具有类型 `Nat`。您可以定义优先级更高的默认实例来覆盖内置实例。

```lean
structure Rational where
  num : Int
  den : Nat
  inv : den ≠ 0

@[default_instance 200]
instance : OfNat Rational n where
  ofNat := { num := n, den := 1, inv := by decide }

instance : ToString Rational where
  toString r := s!"{r.num}/{r.den}"

#check 2 -- Rational
```

优先级对于控制不同默认实例之间的交互也是很有用的。
比如，假设 `xs` 的类型是 `α`，在展开 `xs.map (fun x => 2 * x)` 时，我们希望乘法的同态实例比 `OfNat` 的默认实例有更高的优先级。
这点在我们只实现了实例 `HMul α α α`，而未实现 `HMul Nat α α` 的情况下尤其重要。
现在，我们来揭示 Lean 中 `a*b` 这个符号是如何定义的。

```lean
# namespace Ex
class OfNat (α : Type u) (n : Nat) where
  ofNat : α

@[default_instance]
instance (n : Nat) : OfNat Nat n where
  ofNat := n

class HMul (α : Type u) (β : Type v) (γ : outParam (Type w)) where
  hMul : α → β → γ

class Mul (α : Type u) where
  mul : α → α → α

@[default_instance 10]
instance [Mul α] : HMul α α α where
  hMul a b := Mul.mul a b

infixl:70 " * "  => HMul.hMul
# end Ex
```

## 作用域内的实例（Scoped Instances）

在 Lean 中，我们可以为特定类型创建一个全局的实例，即在整个代码中都可以使用。但是，有时我们希望将实例的作用域限制在一个特定的局部环境内。这可以通过 `local notation` 和 `section` 关键字实现。

```lean
section
  variables {α : Type} [Mul α]

  -- 在此处定义的实例仅在 section 的范围内可用
  local infix `+` := Mul.mul

  -- ...
end
```

上述代码片段中，我们通过 `section` 关键字将作用域限定在花括号 `{}` 内。在花括号内，我们为类型参数 `α` 以及类型类性质 `[Mul α]` 分别指定了默认值 `Type` 和 `Mul`。这样，在 `section` 范围内，我们可以使用泛型类型 `α`，并且该类型必须实现了 `Mul` 类型类。在 `section` 中，我们还使用了 `local infix` 表示符定义了 `+` 运算符，此运算符将执行类型 `α` 上的乘法运算。

## 局部实例（Local Instances）

在 Lean 中，有时我们可以为局部环境提供一个特定类型的替代实例。通过这种方式，我们可以在一定范围内重定义类型类的实例。

```lean
variables {α : Type} [Mul α]

-- 在范围内覆盖默认实例
local infix `+` := alpha_mul

-- ...
```

在上述代码片段中，我们首先指定了类型参数 `α` 必须实现 `Mul` 类型类。然后，我们使用 `local infix` 表示符将 `+` 运算符定义为 `alpha_mul`，这将覆盖默认的乘法实例。注意，此实例仅在局部范围内生效，不会影响到全局的乘法实例。

以上就是 LEAN 中 `Mul` 类的作用域实例和局部实例的介绍。通过这些机制，我们可以灵活地定义和使用类型类的实例，以满足不同的需求和环境。