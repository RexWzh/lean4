## 函数抽象和求值

我们已经知道，如果有 ``m n: Nat``，那么我们有 ``(m，n)：Nat × Nat``。
这给了我们一个创建自然数对的方法。
相反地，如果有 ``p：Nat × Nat``，那么我们有 ``p.1：Nat``和``p.2：Nat``。
这给了我们一种“使用”一个对的方法，通过提取它的两个组件。

我们已经知道如何“使用”一个函数 ``f：α → β``，即我们可以用一个元素 ``a：α`` 来应用它以得到 ``f a：β``。
但是我们如何从另一个表达式中创建一个函数？

应用的伴随是一个称为“lambda抽象”的过程。
假设给定一个变量 ``x: α``，我们可以构造一个表达式 ``t: β``。
那么表达式 ``fun（x：α）=> t``，或者等价地说 ``λ（x：α）=> t``，是类型 ``α → β`` 的一个对象。
将任何值 ``x`` 映射到依赖于 ``x`` 的值 ``t`` 的函数。

```lean
#check fun (x : Nat) => x + 5
#check λ (x : Nat) => x + 5
#check fun x : Nat => x + 5
#check λ x : Nat => x + 5
```

以下是一些更多的示例：

```lean
constant f : Nat → Nat
constant h : Nat → Bool → Nat

#check fun x : Nat => fun y : Bool => h (f x) y   -- Nat → Bool → Nat
#check fun (x : Nat) (y : Bool) => h (f x) y      -- Nat → Bool → Nat
#check fun x y => h (f x) y                       -- Nat → Bool → Nat
```

Lean 将最后三个例子解释为同一表达式；在最后一个表达式中，Lean 从 ``f`` 和 ``h`` 的类型推断出 ``x`` 和 ``y`` 的类型。

一些数学上常见的函数运算的例子可以用 lambda 抽象来描述：

```lean
constant f : Nat → String
constant g : String → Bool
constant b : Bool

#check fun x : Nat => x        -- Nat → Nat
#check fun x : Nat => b        -- Nat → Bool
#check fun x : Nat => g (f x)  -- Nat → Bool
#check fun x => g (f x)        -- Nat → Bool
```

考虑一下这些表达式的含义。表达式 ``fun x : Nat => x`` 表示自然数上的恒等函数，
表达式 ``fun x : α => b`` 表示恒定返回 ``b`` 的函数，
而 ``fun x : Nat => g (f x)`` 表示函数 ``f`` 和 ``g`` 的组合。
一般情况下，我们可以省略变量的类型注释，让 Lean 自动推断。
所以，例如，我们可以写成 ``fun x => g (f x)`` 代替 ``fun x : Nat => g (f x)``。

在前面的定义中，我们可以对常量 `f` 和 `g` 进行抽象化：

```lean
#check fun (g : String → Bool) (f : Nat → String) (x : Nat) => g (f x)
-- (String → Bool) → (Nat → String) → Nat → Bool
```

我们也可以对类型进行抽象：

```lean
#check fun (α β γ : Type) (g : β → γ) (f : α → β) (x : α) => g (f x)
```

最后一个表达式，例如，表示一个接受三种类型``α` `， ``β` `和``γ` `，两个函数``g：β→γ` `和``f：α→β` `，并返回``g``和``f``的组合的函数。（理解这个函数的类型需要对依赖产品有一定的了解，我们将在下面进行解释。）在lambda表达式``fun x ：α => t``中，变量``x``是一个“绑定变量”：它实际上是一个占位符，其“作用域”不会延伸到``t``之外。
例如，在表达式``fun (b：β）（x：α）=> b``中，变量``b``与之前声明的常数``b``无关。
实际上，该表达式表示与``fun (u：β）（z：α）=> u``相同的函数。在形式上，通过绑定变量的重命名相同的表达式被称为 *alpha等价*，被认为是“相同的”。Lean识别出这种等价关系。

注意，将一个项``t ：α→β``应用于一个项``s ：α``会产生一个表达式``t s ：β``。
回到前面的例子并为了清楚起见重命名绑定变量，注意以下表达式的类型：

```lean
#check (fun x : Nat => x) 1     -- Nat
#check (fun x : Nat => true) 1  -- Bool

constant f : Nat → String
constant g : String → Bool

#check
  (fun (α β γ : Type) (g : β → γ) (f : α → β) (x : α) => g (f x)) Nat String Bool g f 0
  -- Bool
```

正如预期的那样，表达式 ``(fun x : Nat =>  x) 1`` 的类型是 ``Nat``。
实际上，更多的情况是对的：将表达式 ``(fun x : Nat => x)`` 应用于 ``1`` 应该“返回”值 ``1``。事实上确实是这样的：

```lean
#reduce (fun x : Nat => x) 1     -- 1
#reduce (fun x : Nat => true) 1  -- true

constant f : Nat → String
constant g : String → Bool

#reduce
  (fun (α β γ : Type) (g : β → γ) (f : α → β) (x : α) => g (f x)) Nat String Bool g f 0
  -- g (f 0)
```

命令 ``#reduce`` 告诉 Lean 通过*减小*表达式到它的正常形式来求值，
也就是说，执行它的内核中允许的所有计算减少。简化表达式 ``(fun x => t) s`` 到 ``t[s/x]`` 的过程 —— 也就是用变量 ``x`` 的值 ``s`` 替换 ``t`` —— 称为 *beta 减少*，具有相同结果的两个术语被称为 *beta 等价*。但是 ``#reduce`` 命令还执行其他形式的减少：

```lean
constant m : Nat
constant n : Nat
constant b : Bool

#reduce (m, n).1        -- m
#reduce (m, n).2        -- n

#reduce true && false   -- false
#reduce false && b      -- false
#reduce b && false      -- Bool.rec false false b

#reduce n + 0           -- n
#reduce n + 2           -- Nat.succ (Nat.succ n)
#reduce 2 + 3           -- 5
```

稍后我们会解释这些术语是如何被评估的。
现在，我们只想强调这是依赖类型理论的一个重要特点：
每个术语都有着可计算的行为，并支持一种规约或*归约*的概念。
原则上，两个归约到相同值的术语被称为*等价*。
它们被 Lean 的类型检查器视为“相同”，并且 Lean 会尽其所能识别和支持这些等价关系。
`#reduce` 命令主要用于理解为什么两个术语被认为是相同的。

Lean 也是一种编程语言。它有一个编译器可以编译成本地代码，还有一个解释器。
你可以使用 `#eval` 命令来执行表达式，这是测试函数的首选方式。
需要注意的是，`#eval` 和 `#reduce` 是不等价的。`#eval` 命令首先将 Lean 表达式编译成中间表示(IR)，然后使用解释器执行生成的 IR。
一些内置类型（例如 `Nat`、`String`、`Array`）在 IR 中有更高效的表示方式。
IR 支持使用对 Lean 不透明的外部函数。

相反，``#reduce`` 命令依赖于一个与 Lean 的可靠内核中的规约引擎类似的归约引擎，该内核负责检查和验证表达式和证明的正确性。
它比 ``#eval`` 更低效，并且将所有外部函数视为不透明常量。
我们稍后会讨论两个命令之间的其他区别。