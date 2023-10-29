# 快速入门

这些说明将引导您使用“基本”设置和 VS Code 编辑器设置 Lean。
有关其他方法、支持的平台和有关设置 Lean 的更多详细信息，请参阅 [设置](./setup.md)。

查看快速 [演示视频](https://www.youtube.com/watch?v=yZo6k48L0VY)。

1. 安装 [VS Code](https://code.visualstudio.com/)。

1. 启动 VS Code 并安装 `lean4` 扩展。

    ![安装 vscode-lean4 扩展](images/code-ext.png)

1. 使用“文件 > 新建文本文件”（`Ctrl + N`）创建一个新文件。点击 `选择语言` 提示，在输入框内输入 `lean4`，然后按 ENTER 键。应该会弹出以下内容：
    ![elan](images/install_elan.png)

    点击 “Install Lean using Elan” 按钮。您应该能看到如下所示的一些进度输出：

    ```
    info: syncing channel updates for 'stable'
    info: latest update on stable, lean version v4.0.0
    info: downloading component 'lean'
    ```

    如果没有弹出对话框，可能是已经安装了 Elan。在这种情况下，您可能需要通过运行 `elan default leanprover/lean4:stable` 确保您的默认工具链是 Lean 4，然后重新打开文件，否则下一步将失败。

1. 当安装进行时，您可以将以下 Lean 程序粘贴到新文件中：

    ```lean
    #eval Lean.versionString
    ```

    安装完成后，Lean 语言服务器应会自动启动，并且您将获得语法高亮和一个弹出的“Lean Infoview”。当您将光标放在代码的结尾时，您将看到 `#eval` 语句的输出。

    ![安装成功](images/code-success.png)

您已完成设置！

## 创建一个 Lean 项目

*如果您的目标是贡献给 [mathlib4](https://github.com/leanprover-community/mathlib4) 或将其用作依赖项，请参阅其自述文件以获取特定的说明。*

现在，您可以在一个新文件夹中创建一个 Lean 项目。从“查看 > 终端”运行 `lake init foo` 来创建一个包，然后使用 `lake build` 来获取您的 Lean 程序的可执行版本。
在Linux/macOS上，你首先必须按照Lean安装的说明执行操作，或者注销并重新登录以便于在终端中使用Lean可执行文件。

注意：必须使用“File > Open Folder…”来打开包，以使导入生效。
在运行“Lean 4: Refresh File Dependencies”（`Ctrl+Shift+X`）之后，其他文件中的更改将变得可见。

## 故障排除

**InfoView显示“等待Lean服务器启动…”一直不动。**

检查VS Code终端是否显示了来自`elan`的一些安装错误。
如果这样不起作用，还可以尝试运行VS Code命令`Developer: Reload Window`。