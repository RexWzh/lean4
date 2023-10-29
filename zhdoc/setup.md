# 支持的平台

### 一级平台

我们的 CI 进行构建和测试的平台，可以通过 elan 每夜版来获取。

* x86-64 Linux，使用 glibc 2.27 及以上版本
* x86-64 macOS 10.15 及以上版本
* x86-64 Windows 10 及以上版本

### 二级平台

平台被交叉编译，但未经过 CI 测试，可以通过每夜版来获取。

由于缺乏自动化测试，发布版本可能会悄悄地出现问题。欢迎报告问题和修复。

* aarch64 Linux，使用 glibc 2.27 及以上版本
* aarch64 (Apple Silicon) macOS

<!--
### 三级平台

这些平台经过手动测试已知可工作，但没有通过 CI 或者官方发布
-->

# 设置 Lean

有关标准设置和使用 VS Code 作为编辑器的快速入门说明，请参见 [quickstart](./quickstart.md)。

所有支持的平台的发布版都可以在 <https://github.com/leanprover/lean4/releases> 找到。
然而，推荐使用 Lean 版本管理器 [`elan`](https://github.com/leanprover/elan) 来代替手动下载并设置路径：

```sh
$ elan self update  # in case you haven't updated elan in a while
# download & activate latest Lean 4 stable release (https://github.com/leanprover/lean4/releases)
$ elan default leanprover/lean4:stable
```

## `lake`

Lean 4附带了一个名为 `lake` 的包管理器。
使用 `lake init foo` 在当前目录中初始化一个名为 `foo` 的 Lean 包，并使用 `lake build` 对它以及它的所有依赖进行类型检查和构建。使用 `lake help` 来了解更多的命令。
一个名为 `foo` 的包的一般目录结构如下：

```sh
lakefile.lean  # package configuration
lean-toolchain # specifies the lean version to use
Foo.lean       # main file, import via `import Foo`
Foo/
  A.lean       # further files, import via e.g. `import Foo.A`
  A/...        # further nesting
build/         # `lake` build output directory
```

在运行 `lake build` 后，你将会看到一个名为 `./build/bin/foo` 的二进制文件，当你运行它时，你应该会看到以下输出结果：

```
Hello, world!
```

## 编辑

Lean 实现了[语言服务器协议](https://microsoft.github.io/language-server-protocol/)，可以用于在 [Emacs](https://github.com/leanprover/lean4-mode)、[VS Code](https://github.com/leanprover-community/vscode-lean4) 和其他可能的编辑器中进行交互式开发。

更改必须保存后才能在其他文件中看到，然后使用编辑器命令来使其无效化（参见上面的链接）。