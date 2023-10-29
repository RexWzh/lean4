# 作为嵌入式领域特定语言的平衡括号

让我们来看看如何使用宏来扩展 Lean 4 解析器，并嵌入一个用于构建“平衡括号”的语言。
该语言接受由 [BNF 文法](https://en.wikipedia.org/wiki/Backus%E2%80%93Naur_form) 给出的字符串。

```
Dyck ::=
  "(" Dyck ")"
  | "{" Dyck "}"
  | end
```

我们首先定义一个我们希望解析的文法的归纳数据类型：

```lean,ignore
inductive Dyck : Type where
  | round : Dyck → Dyck  -- ( <inner> )
  | curly : Dyck → Dyck  -- { <inner> }
  | leaf : Dyck
```

我们首先使用 `declare_syntax_cat <category>` 命令声明一个 _语法类别_。
这给我们的语法命名，并允许我们指定与我们的语法相关的解析规则。

```lean,ignore
declare_syntax_cat brack
```

接下来，我们使用 `syntax <parse rule>` 命令来指定语法：

```lean,ignore
syntax "end" : brack
```

上述意味着标记 "end" 属于语法类别 `brack`。

同样地，我们使用以下规则声明了规则 `"(" Dyck ")"` 和 `"{" Dyck "}"`：

```lean,ignore
syntax "(" brack ")" : brack
syntax "{" brack "}" : brack
```

最后，我们需要一种从这个语法中构建 **Lean 4 项** 的方法 - 也就是说，我们必须将这个语法翻译成一个 `Dyck` 值，这是一个 Lean 4 项。为此，我们创建了一种新的“引用”方式，它接受 `brack` 中的语法并生成一个 `term`。

```lean,ignore
syntax "`[Dyck| " brack "]" : term
```

为了指定变换规则，我们使用 `macro_rules` 来声明语法 `` `[Dyck| <brack>] `` 的转换方式。这是使用模式匹配风格的语法来书写的，其中左侧声明要匹配的语法模式，右侧声明生成的产生式。语法占位符（古老引用）通过 `$<var-name>` 语法引入。右侧是我们生成的任意 Lean 术语。

```lean,ignore
macro_rules
  | `(`[Dyck| end])    => `(Dyck.leaf)
  | `(`[Dyck| ($b)]) => `(Dyck.round `[Dyck| $b])  -- recurse
  | `(`[Dyck| {$b}]) => `(Dyck.curly `[Dyck| $b])  -- recurse
```



```lean,ignore
#check `[Dyck| end]      -- Dyck.leaf
#check `[Dyck| {(end)}]  -- Dyck.curl (Dyck.round Dyck.leaf)
```

总结一下，我们已经看到了：
- 如何为 Dyck 语法声明一个语法类别。
- 如何使用 `syntax` 来指定该语法的解析树。
- 如何使用 `macro_rules` 将其翻译成 Lean 4 语言。

完整的代码如下：

```lean
{{#include syntax_example.lean}}
```

