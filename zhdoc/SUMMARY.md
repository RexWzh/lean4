# 摘要

- [什么是 Lean](./whatIsLean.md)
- [Lean 指南](./tour.md)
- [设置 Lean](./quickstart.md)
  - [扩展设置注意事项](./setup.md)
  - [Nix 设置](./setup/nix.md)
- [Lean 中的定理证明](./tpil.md)
- [Lean 中的函数式编程](fplean.md)
- [示例](./examples.md)
  - [回文](examples/palindromes.lean.md)
  - [二叉搜索树](examples/bintree.lean.md)
  - [一种经过验证的类型检查器](examples/tc.lean.md)
  - [合法的解释器](examples/interp.lean.md)
  - [依赖的 de Bruijn 指数](examples/deBruijn.lean.md)
  - [参数化的高阶抽象语法](examples/phoas.lean.md)

# 语言手册
<!-- - [使用 Lean](./using_lean.md) -->
<!-- - [词法结构](./lexical_structure.md) -->
<!-- - [表达式](./expressions.md) -->
<!-- - [声明](./declarations.md) -->
- [组织特性](./organization.md)
  - [章节](./sections.md)
  - [命名空间](./namespaces.md)
  - [隐式参数](./implicit.md)
  - [自动绑定的隐式参数](./autobound.md)
<!-- - [依赖类型](./deptypes.md) -->
<!--   - [简单类型论](./simptypes.md) -->
<!--   - [类型作为对象](./typeobjs.md) -->
<!--   - [函数抽象和求值](./funabst.md) -->
<!--   - [引入定义](./introdef.md) -->
<!--   - [依赖类型理论的依赖性](./dep.md) -->
<!-- - [策略](./tactics.md) -->
- [语法扩展](./syntax.md)
  - [`do` 表达式](./do.md)
  - [字符串插值](./stringinterp.md)
  - [用户定义的符号](./notation.md)
  - [宏总览](./macro_overview.md)
  - [展开器](./elaborators.md)
  - [示例](./syntax_examples.md)
    - [平衡括号](./syntax_example.md)
# LEAN 定理证明

本文档提供了关于 LEAN 定理证明库的使用指南和功能说明。

- [算术 DSL](./metaprogramming-arith.md)
- [声明新类型](./decltypes.md)
  - [枚举类型](./enum.md)
  - [归纳类型](./inductive.md)
  - [结构体](./struct.md)
  - [类型类](./typeclass.md)
  - [一致性提示](./unifhint.md)
- [内置类型](./builtintypes.md)
  - [自然数](./nat.md)
  - [整数](./int.md)
  - [固定位数无符号整数](./uint.md)
  - [浮点数](./float.md)
  - [数组](./array.md)
  - [列表](./list.md)
  - [字符](./char.md)
  - [字符串](./string.md)
  - [选项](./option.md)
  - [惰性计算](./thunk.md)
  - [任务和线程](./task.md)
- [函数](./functions.md)
- [Monad](./monads/intro.md)
  - [函子](./monads/functors.lean.md)
  - [应用函子](./monads/applicatives.lean.md)
  - [Monad](./monads/monads.lean.md)
  - [Reader](./monads/readers.lean.md)
  - [State](./monads/states.lean.md)
  - [Except](./monads/except.lean.md)
  - [变换器](./monads/transformers.lean.md)
  - [定律](./monads/laws.lean.md)

# 其他

- [常见问题](./faq.md)
- [与 Lean 3 的重大变化](./lean3changes.md)
- [在 LaTeX 中添加语法高亮](./syntax_highlight_in_latex.md)
- [用户小部件](examples/widgets.lean.md)
- [语义高亮](./semantic_highlighting.md)

# 开发

- [开发指南](./dev/index.md)
- [构建 Lean](./make/index.md)
  - [Ubuntu 安装](./make/ubuntu.md)
  - [macOS 安装](./make/osx-10.9.md)
  - [Windows MSYS2 安装](./make/msys2.md)
  - [Windows with WSL](./make/wsl.md)
- [Nix 设置 (*实验性*)](./make/nix.md)
- [引导](./dev/bootstrap.md)
- [测试](./dev/testing.md)
- [调试](./dev/debugging.md)
- [提交规范](./dev/commit_convention.md)
- [构建此手册](./dev/mdbook.md)
- [外部函数接口](./dev/ffi.md)