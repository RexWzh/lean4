使用 `perf`
------------

在 Linux 机器上，我们使用 `perf` + `hotspot` 来分析 `lean`。

假设我们在 `lean4` 的根目录下，并且已经在 `build/release` 目录下进行了发布构建。
然后，我们可以使用以下命令来收集性能数据：

```
perf record --call-graph dwarf build/release/stage1/bin/lean src/Lean/Elab/Term.lean
```

注意，在您的系统中安装了 `elan` 后，`lean` 实际上是选择要执行的 `lean` 的 `elan` 二进制文件。

为了可视化数据，我们使用 `hotspot`：

```
hotspot
```

