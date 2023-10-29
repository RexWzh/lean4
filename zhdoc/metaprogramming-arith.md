# 作为一种嵌入式特定领域语言的算术

让我们解析另一个经典的语法，即包含加法、乘法、整数和变量的算术表达式的语法。在这个过程中，我们将学习如何：

- 将诸如 `x` 这样的标识符转换为宏中的字符串。
- 添加"转义"宏上下文的能力。这对于解释具有其_原始_含义（预定义值）的标识符非常有用，而不是在宏中将其视为符号。

让我们从可能的最简单的事情开始。我们将定义一种AST，并使用操作符 `+` 和 `*` 来表示构建算术AST。


这是我们将要解析的AST：

```lean,ignore
{{#include metaprogramming-arith.lean:1:5}}
```

我们声明一个语法类别来描述我们将要解析的语法。
通过为加法写上 `syntax:50`，乘法写上 `syntax:60`，我们可以控制 `+` 和 `*` 的优先级，
表示乘法比加法具有更高的结合性（数字越大，结合性越紧）。
这使我们能够在定义新语法时声明_优先级_。

```lean,ignore
{{#include metaprogramming-arith.lean:7:13}}
```

此外，如果我们看一下`syntax:60  arith:60 "+" arith:61 : arith`，可以看出在`arith:60 "+" arith:61`处的优先级声明表明左边的参数必须至少具有`60`或更高的优先级，并且右边的参数必须至少具有`61`或更高的优先级。注意，这会强制实现左结合。为了理解这一点，让我们来比较两个假设的解析过程：

```
-- syntax:60  arith:60 "+" arith:61 : arith -- Arith.add
-- a + b + c
(a:60 + b:61):60 + c
a + (b:60 + c:61):60
```

在 `a + (b:60 + c:61):60` 的语法树中，我们可以看到右侧的参数 `(b + c)` 被赋予了优先级 `60`。然而，加法的规则要求右侧的参数至少具有优先级为 61，这可以从 `syntax:60 arith:60 "+" arith:61 : arith` 的右侧 `arith:61` 看出来。因此，规则 `syntax:60 arith:60 "+" arith:61 : arith` 确保了加法是左结合的。

由于加法的优先级为 `60/61`，乘法的优先级为 `70/71`，这导致乘法比加法具有更高的优先级。让我们再次比较两个假设的解析过程：

```
-- syntax:60  arith:60 "+" arith:61 : arith -- Arith.add
-- syntax:70 arith:70 "*" arith:71 : arith -- Arith.mul
-- a * b + c
a * (b:60 + c:61):60
(a:70 * b:71):70 + c
```

当解析 `a * (b + c)` 时，`(b + c)` 的优先级被加法规则分配了 `60`。然而，乘法操作符期望右操作数的优先级**至少为** 71。因此，这个解析是无效的。相反，`(a * b) + c` 将 `(a * b)` 的优先级定义为 `70`。这与加法兼容，加法期望左操作数的优先级**至少为 `60`**（`70` 大于 `60`）。因此，字符串 `a * b + c` 被解析为 `(a * b) + c`。
详细信息请参考[Lean 手册中关于语法扩展的部分](../syntax.md#notations-and-precedence)。

为了将字符串转换为 `Arith`，我们定义了一个宏，将语法类别 `arith` 转换为 `term` 中的 `Arith` 形式的归纳值：

```lean,ignore
{{#include metaprogramming-arith.lean:15:16}}
```

我们的宏规则执行“显而易见”的翻译：

```lean,ignore
{{#include metaprogramming-arith.lean:18:23}}
```

一些例子：

```lean,ignore
{{#include metaprogramming-arith.lean:25:41}}
```

将变量写为字符串，比如 `"x"` ，这种写法已经过时了；如果我们能写成 `x * y` ，然后宏将其翻译成 `Arith.mul (Arith.Symbol "x") (Arith.mul "y")` ，那会更漂亮得多吧？
我们可以做到这一点，并且这将是我们操作宏变量的第一个尝试 --- 我们将使用 `x.getId` 来代替直接评估 `$x`。
我们还为 `Arith|` 编写一个宏规则，将标识符翻译成字符串，使用 `$(Lean.quote (toString x.getId))` ：

```lean,ignore
{{#include metaprogramming-arith.lean:43:46}}
```

我们来测试一下，看看我们是否能够直接写表达式 `x * y`，而不用写成 `"x" * "y"`：

```lean,ignore
{{#include metaprogramming-arith.lean:48:51}}
```

我们现在展示上述定义的一个不幸的结果。假设我们想要构建 `(x + y) + z`。
既然我们已经将 `xPlusY` 定义为 `x + y`，也许我们应该重用它！让我们试试：

```lean,ignore
#check `[Arith| xPlusY + z]  -- Arith.add (Arith.symbol "xPlusY") (Arith.symbol "z")
```

哎呀，这没起作用！发生了什么？在 Lean 中，`xPlusY` 本身被视为标识符！因此，我们需要添加一些语法来"转义" `Arith|` 上下文。让我们使用语法 `<[ $e:term ]>` 来表示：将 `$e` 评估为一个真正的项，而不是作为一个标识符。宏的写法如下：

```lean,ignore
{{#include metaprogramming-arith.lean:53:56}}
```

让我们尝试一下我们之前的例子：

```lean,ignore
{{#include metaprogramming-arith.lean:58:58}}
```

在本教程中，我们在上一个教程的基础上进行了扩展，解析了一个更加逼真的具有多个优先级级别的语法，学习了如何直接在宏中解析标识符，并且学习了如何在宏上下文中提供转义。

#### 完整代码清单

```lean
{{#include metaprogramming-arith.lean}}
```

