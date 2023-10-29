你可以将高亮代码从 VS Code 直接复制到任何支持 HTML 输入的富文本编辑器中。要在 LaTeX 中高亮代码，有两种选择：
* [listings](https://ctan.org/pkg/listings)，这是一个常用的包，设置简单，但在使用 Unicode 时可能会遇到一些限制。
* [`minted`](https://ctan.org/pkg/minted)，这是一个 LaTeX 包，封装了 [Pygments](https://pygments.org/) 语法高亮库。它需要额外的设置步骤，但当与 XeLaTeX 或 LuaLaTeX 结合使用时，可以提供对 Unicode 的无限制支持。

## 使用 `listings` 的例子

将 [`lstlean.tex`](https://raw.githubusercontent.com/leanprover/lean4/master/doc/latex/lstlean.tex) 保存到相同目录或任何 `TEXINPUTS` 路径下，作为以下测试文件：

```latex
\documentclass{article}
\usepackage[T1]{fontenc}
\usepackage[utf8]{inputenc}
\usepackage{listings}
\usepackage{amssymb}

\usepackage{color}
\definecolor{keywordcolor}{rgb}{0.7, 0.1, 0.1}   % red
\definecolor{tacticcolor}{rgb}{0.0, 0.1, 0.6}    % blue
\definecolor{commentcolor}{rgb}{0.4, 0.4, 0.4}   % grey
\definecolor{symbolcolor}{rgb}{0.0, 0.1, 0.6}    % blue
\definecolor{sortcolor}{rgb}{0.1, 0.5, 0.1}      % green
\definecolor{attributecolor}{rgb}{0.7, 0.1, 0.1} % red

\def\lstlanguagefiles{lstlean.tex}
% set default language
\lstset{language=lean}

\begin{document}
\begin{lstlisting}
theorem funext {f₁ f₂ : ∀ (x : α), β x} (h : ∀ x, f₁ x = f₂ x) : f₁ = f₂ := by
  show extfunApp (Quotient.mk f₁) = extfunApp (Quotient.mk f₂)
  apply congrArg
  apply Quotient.sound
  exact h
\end{lstlisting}
\end{document}
```

通过以下方式编译该文件：

```bash
$ pdflatex test.tex
```

*对于旧版本的 LaTeX，您可能需要在`inputenc`中使用`[utf8x]`而不是`[utf8]`*

## 示例代码使用 `minted` 宏包

1. 首先[安装 Pygments](https://pygments.org/download/)。
2. 然后保存 [`lean4.py`](https://raw.githubusercontent.com/leanprover/lean4/master/doc/latex/lean4.py) 到一个目录中，`lean4.py` 中包含了一个更新到 Lean 4 的 Lean 高亮器版本。
3. 在相同的目录中，保存以下示例 LaTeX 文件 `test.tex`：

```latex
\documentclass{article}
\usepackage{fontspec}
% switch to a monospace font supporting more Unicode characters
\setmonofont{FreeMono}
\usepackage{minted}
% instruct minted to use our local theorem.py
\newmintinline[lean]{lean4.py:Lean4Lexer -x}{bgcolor=white}
\newminted[leancode]{lean4.py:Lean4Lexer -x}{fontsize=\footnotesize}
\usemintedstyle{tango}  % a nice, colorful theme

\begin{document}
\begin{leancode}
theorem funext {f₁ f₂ : ∀ (x : α), β x} (h : ∀ x, f₁ x = f₂ x) : f₁ = f₂ := by
  show extfunApp (Quotient.mk' f₁) = extfunApp (Quotient.mk' f₂)
  apply congrArg
  apply Quotient.sound
  exact h
\end{leancode}
\end{document}
```

然后，您可以通过执行以下命令来编译 `test.tex` 文件：

```bash
xelatex --shell-escape test.tex
```

一些注意事项：

- 使用 `xelatex` 或 `lualatex` 处理代码中的 Unicode 字符。
- 需要使用 `--shell-escape` 来允许 `xelatex` 在 shell 中执行 `pygmentize`。
- 如果所选的等宽字体缺少某些 Unicode 符号，您可以使用后备字体或其他替代的 LaTeX 代码来显示它们。

``` latex
\usepackage{newunicodechar}
\newfontfamily{\freeserif}{DejaVu Sans}
\newunicodechar{✝}{\freeserif{✝}}
\newunicodechar{𝓞}{\ensuremath{\mathcal{O}}}
```

- minted 的一个“有用”的功能是，它会在所选择的词法解析器无法识别的字符周围绘制红色框框。
 由于 Lean 词法解析器无法包含所有用户定义的语法，因此建议[绕过](https://tex.stackexchange.com/a/343506/14563)此功能。