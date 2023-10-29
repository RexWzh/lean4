## 简单类型理论

"类型理论"得名于每个表达式都有一个相关联的*类型*。
例如，在给定的上下文中，``x + 0``表示一个自然数，而``f``表示自然数上的一个函数。
对于那些不喜欢数学的人来说，Lean的自然数是一个任意精度的无符号整数。

下面是一些在Lean中声明对象并检查其类型的示例。

```lean
/- Declare some constants. -/

constant m  : Nat   -- m is a natural number
constant n  : Nat
constant b1 : Bool  -- b1 is a Boolean
constant b2 : Bool

/- Check their types. -/

#check m            -- output: Nat
#check n
#check n + 0        -- Nat
#check m * (n + 0)  -- Nat
#check b1           -- Bool
#check b1 && b2     -- "&&" is the Boolean and
#check b1 || b2     -- Boolean or
#check true         -- Boolean "true"
```

任何位于 ``/-`` 和 ``-/`` 之间的文字都被 Lean 忽略，被当做注释块处理。
同样地，两个连字符 ``--`` 表示该行剩余部分为注释，同样被 Lean 忽略。
注释块可以嵌套，类似于许多编程语言中的"注释掉"代码块的方式。

``constant`` 命令将新的常量符号引入工作环境中。
``#check`` 命令要求 Lean 报告它们的类型；在 Lean 中，查询系统信息的辅助命令通常以井号符号开头。
你可以尝试声明一些常量，并自行进行类型检查。
以这种方式声明新对象是对系统进行实验的好方法。

简单类型理论之所以强大，是因为可以通过其他类型构建新的类型。
例如，如果 ``a`` 和 ``b`` 是类型，``a -> b`` 表示从 ``a`` 到 ``b`` 的函数类型，
``a × b`` 表示由属于 ``a`` 的元素与属于 ``b`` 的元素构成的对的类型，也被称为 *笛卡尔积*。
注意，`×` 是一个 Unicode 符号。我们认为合理使用 Unicode 能提高可读性，
并且现代的编辑器都对它有很好的支持。在 Lean 标准库中，我们经常使用希腊字母来表示类型，
而 Unicode 符号 `→` 则作为 `->` 的更紧凑版本。

```lean
constant m : Nat
constant n : Nat

constant f  : Nat → Nat         -- type the arrow as "\to" or "\r"
constant f' : Nat -> Nat        -- alternative ASCII notation
constant p  : Nat × Nat         -- type the product as "\times"
constant q  : Prod Nat Nat      -- alternative notation
constant g  : Nat → Nat → Nat
constant g' : Nat → (Nat → Nat) -- has the same type as g!
constant h  : Nat × Nat → Nat
constant F  : (Nat → Nat) → Nat -- a "functional"

#check f            -- Nat → Nat
#check f n          -- Nat
#check g m n        -- Nat
#check g m          -- Nat → Nat
#check (m, n)       -- Nat × Nat
#check p.1          -- Nat
#check p.2          -- Nat
#check (m, n).1     -- Nat
#check (p.1, n)     -- Nat × Nat
#check F f          -- Nat
```

你应该尝试一些自己的例子。

让我们先讲一些基本的语法。你可以使用Unicode箭头``→``输入，输入``\to``或``\r``。你还可以使用ASCII的替代形式``->``，所以表达式``Nat -> Nat``和``Nat → Nat``表示的是相同的意思。
两个表达式都表示接受自然数作为输入并返回自然数作为输出的函数的类型。
笛卡尔积的Unicode符号``×``用``\times``输入。
我们通常使用小写的希腊字母如``α``、``β``和``γ``表示类型的取值范围。
你可以使用``\a``、``\b``和``\g``输入这些特定的字母。

这里还有一些需要注意的地方。首先，函数``f``对值``x``的应用表示为``f x``。
其次，在编写类型表达式时，箭头与**右边**结合；例如，``g``的类型是``Nat → (Nat → Nat)``。
因此，我们可以将``g``视为一个接受自然数并返回另一个接受自然数并返回自然数的函数。
在类型理论中，这通常比将``g``表示为一个接受一对自然数作为输入并返回自然数作为输出的函数更方便。例如，它允许我们“部分应用”函数``g``。
上面的例子显示，``g m``的类型是``Nat → Nat``，即函数“等待”第二个参数``n``，然后返回``g m n``。将类型为``Nat × Nat → Nat``的函数``h``“重新定义”为看起来像``g``的过程称为*柯里化*，我们将在下面再来讨论这个概念。

到现在为止，你可能已经猜到，在Lean中，``(m, n)``表示``m``和``n``的有序对，如果``p``是一个对偶，``p.1``和``p.2``表示两个投影。