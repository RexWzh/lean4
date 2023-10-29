# 符号和优先级

最基本的语法扩展命令允许引入新的（或重载现有的）前缀、中缀和后缀运算符。

```lean
infixl:65   " + " => HAdd.hAdd  -- left-associative
infix:50    " = " => Eq         -- non-associative
infixr:80   " ^ " => HPow.hPow  -- right-associative
prefix:75  "-"   => Neg.neg
# set_option quotPrecheck false
postfix:max "⁻¹"  => Inv.inv
```

在表示运算符种类（其“固定性”）的初始命令名称之后，我们给出操作符前面带有冒号 `:` 的解析优先级，然后是由双引号括起来的新建或现有记号（空格用于漂亮的打印输出），最后是箭头 `=>` 后面这个操作符应该转换为的函数。

优先级是一个自然数，描述了一个操作符与其参数“绑定”的“紧密程度”，编码了运算的顺序。我们可以通过查看以上命令展开的内容来使这一概念更加精确：

```lean
notation:65 lhs:65 " + " rhs:66 => HAdd.hAdd lhs rhs
notation:50 lhs:51 " = " rhs:51 => Eq lhs rhs
notation:80 lhs:81 " ^ " rhs:80 => HPow.hPow lhs rhs
notation:75 "-" arg:75 => Neg.neg arg
# set_option quotPrecheck false
notation:1024 arg:1024 "⁻¹" => Inv.inv arg  -- `max` is a shorthand for precedence 1024
```

事实证明，第一个代码块中的所有命令实际上都是命令 *宏*，将其转换为更通用的 `notation` 命令。我们将在下面学习如何编写这样的宏。`notation` 命令接受一个包含令牌和带有优先级的命名术语占位符的混合序列，可以在 `=>` 右侧引用并用相应位置解析的术语替换。具有优先级 `p` 的占位符仅接受在该位置至少具有 `p` 优先级的符号。因此，字符串 `a + b + c` 不能被解析为等同于 `a + (b + c)`，因为 `infixl` 符号的右操作数的优先级比符号本身高一级。相反，`infixr` 为右操作数重用了符号的优先级，因此 `a ^ b ^ c` *可以*被解析为 `a ^ (b ^ c)`。注意，如果我们直接使用 `notation` 来引入中缀符号，例如

```lean
# set_option quotPrecheck false
notation:65 lhs:65 " ~ " rhs:65 => wobble lhs rhs
```

在优先级无法足够确定关联性的情况下，Lean 的解析器将默认使用右关联。更准确地说，Lean 的解析器在存在歧义的语法中遵循局部 “最长解析” 规则：在解析 `a ~ b ~ c` 中 `a ~` 的右手边时，它将继续解析尽可能长的部分（在当前优先级允许的情况下），不仅仅在 `b` 后停止，还会解析 `~ c`。因此，该术语等价于 `a ~ (b ~ c)`。

正如上述提到的，`notation` 命令允许我们自由地定义任意混合语法，可以混合使用标记和占位符。

```lean
# set_option quotPrecheck false
notation:max "(" e ")" => e
notation:10 Γ " ⊢ " e " : " τ => Typing Γ e τ
```

占位符如果没有优先级，默认为 `0`，即它们可以接受任意优先级的表示法。如果两个表示法重叠，我们再次应用最长解析规则：

```lean
notation:65 a " + " b:66 " + " c:66 => a + b - c
#eval 1 + 2 + 3  -- 0
```

新标记法优于二进制标记法，因为在后者进行链接之前，它会在 `1 + 2` 后停止解析。如果有多个符合最长解析的标记法，选择将延迟到详细说明，除非有且仅有一个重载正确。