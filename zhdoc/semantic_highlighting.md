语义高亮
---------------------

Lean 语言服务器为编辑器提供语义高亮信息。为了在 VSCode 中获得这个功能，您可能需要在首选项中激活 "Editor > Semantic Highlighting" 选项（在 `settings.json` 中对应于 `"editor.semanticHighlighting.enabled": true`）。这里的默认选项是让您的颜色主题决定是否激活语义高亮（默认主题 Dark+ 和 Light+ 对其进行了激活）。

然而，如果您的颜色主题没有足够区分语法类别或者非常微妙地区分它们，这可能是不够的。例如，默认的 Light+ 主题使用颜色 `#001080` 表示变量。这与作为默认文本颜色的 `#000000` 非常接近。这使得很容易忽略意外使用 [auto bound implicit arguments](https://lean-lang.org/lean4/doc/autobound.html) 的情况。例如，在

```lean
def my_id (n : nat) := n
```

也许 `nat` 是个误字，实际上应该是 `Nat`。如果你的颜色主题足够好，你应该能看到 `n` 和 `nat` 有着相同的颜色，因为它们都被语义高亮标记为变量。如果你更喜欢写成 `(n : Nat)` 的形式，那么 `n` 仍然保持其变量颜色，而 `Nat` 则采用默认的文本颜色。

如果你使用的是一个糟糕的主题，你可以通过修改 `Semantic Token Color Customizations` 配置来解决这个问题。这不能直接在首选项对话框中完成，但你可以点击 "Edit in settings.json" 直接编辑设置文件。请注意，在在其他选项卡或 VSCode 窗口中看到任何效果之前，你必须保存此文件（以与保存任何在 VSCode 中打开的文件相同的方式）。

在主配置对象中，你可以添加类似以下的内容：

```
"editor.semanticTokenColorCustomizations": {
        "[Default Light+]": {"rules": {"function": "#ff0000", "property": "#00ff00", "variable": "#ff00ff"}}
    },
```

这个例子中的颜色并不是为了好看，而是为了在测试文件时能够容易地进行标记。当然，你需要将 `Default Light+` 替换为你的主题名称，并且如果你使用多个主题，你可以自定义多个主题。VSCode会在HTML颜色规范旁边显示小的彩色方块。将鼠标悬停在颜色规范上方时，会弹出一个方便的颜色选择对话框。

为了理解上面示例中的`function`、`property`和`variable`是什么意思，最简单的方法是打开一个 Lean 文件，并询问 VSCode 关于文件中各种元素的分类。使用 Ctrl-shift-p（或 ⌘-shift-p 在 Mac 上）打开命令面板，并搜索“Inspect Editor Tokens and Scopes”（只需输入“tokens”即可）。然后，你可以点击文件中的任何单词，并查看显示信息中是否有“semantic token type”行。