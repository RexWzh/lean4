词法结构
=================

本节介绍了Lean语言的详细词法结构。

Lean程序由一系列UTF-8标记组成，每个标记可以是以下之一：

```
   token: symbol | command | ident | string | char | numeral |
        : decimal | doc_comment | mod_doc_comment | field_notation
```

标记可以由空格、制表符、换行符和回车符分隔，以及注释。单行注释以 ``--`` 开头，而多行注释则由 ``/-`` 和 ``-/`` 括起来，并且可以嵌套。

符号和命令
====================

.. *(待办事项：列出内置符号和命令的标记吗？)*

符号是在术语表示和命令中使用的静态标记。它们既可以像关键字一样（例如 `have <structured_proofs>` 关键字），也可以使用任意的 Unicode 字符。

命令标记是在任何顶级声明或操作前面的静态标记。它们通常是关键字形式，而临时命令（如以 ``#`` 字符为前缀的 `#print <instructions>`）则是前缀命令。内置命令集被列在 [其他命令](./other_commands.md) 中。

用户可以通过 [quoted_symbols](#quoted-symbols) 中列出的命令或 [user_command] <attributes> 属性来动态扩展符号和命令标记的集合。

.. _identifiers:

标识符
===========

*原子标识符*，或*原子名称*，是（大致上）以字母数字字符串开头的字符串。一个（分层）*标识符*，或*名称*，由一个或多个以句点分隔的原子名称组成。

原子名称的一部分可以通过用一对法语双引号 ``«»`` 将其括起来来进行转义。

```lean
   def Foo.«bar.baz» := 0  -- name parts ["Foo", "bar.baz"]
```



```
   ident: atomic_ident | ident "." atomic_ident
   atomic_ident: atomic_ident_start atomic_ident_rest*
   atomic_ident_start: letterlike | "_" | escaped_ident_part
   letterlike: [a-zA-Z] | greek | coptic | letterlike_symbols
   greek: <[α-ωΑ-Ωἀ-῾] except for [λΠΣ]>
   coptic: [ϊ-ϻ]
   letterlike_symbols: [℀-⅏]
   escaped_ident_part: "«" [^«»\r\n\t]* "»"
   atomic_ident_rest: atomic_ident_start | [0-9'ⁿ] | subscript
   subscript: [₀-₉ₐ-ₜᵢ-ᵪ]
```

字面量字符串
==========

字符串字面量用双引号（``"``）括起来。它们可以包含换行符，换行符会保留在字符串值中。反斜杠（`\`）是一个特殊的转义字符，可以用于转义以下特殊字符：
- `\\` 表示一个转义的反斜杠，因此这个转义导致一个反斜杠包含在字符串中。
- `\"` 在字符串中放置一个双引号。
- `\'` 在字符串中放置一个撇号。
- `\n` 在字符串中放置一个换行符。
- `\t` 在字符串中放置一个制表符。
- `\xHH` 将由两位十六进制表示的字符放入字符串中。例如，"this \x26 that" 变成 "this & that"。超过 0x80 的值将根据[Unicode表](https://unicode-table.com/en/)进行解释，所以 "\xA9 Copyright 2021" 是 "© Copyright 2021"。
- `\uHHHH` 将由四位十六进制表示的字符放入字符串中，所以以下字符串 "\u65e5\u672c" 将变成 "日本"，意思是 "Japan"。

因此，完整的语法是：

```
   string       : '"' string_item '"'
   string_item  : string_char | string_escape
   string_char  : [^\\]
   string_escape: "\" ("\" | '"' | "'" | "n" | "t" | "x" hex_char{2} | "u" hex_char{4} )
   hex_char     : [0-9a-fA-F]
```

字符字面量
==============

字符字面量使用单引号（``'``）括起来。

```
   char: "'" string_item "'"
```

数值字面量
========

可以用不同的进制来指定数值字面量。

```
   numeral    : numeral10 | numeral2 | numeral8 | numeral16
   numeral10  : [0-9]+
   numeral2   : "0" [bB] [0-1]+
   numeral8   : "0" [oO] [0-7]+
   numeral16  : "0" [xX] hex_char+
```

*浮点文字也可以带有可选的指数：*

```
1.23e4
```

*以上是一个带有指数的浮点文字。*

```
   float    : [0-9]+ "." [0-9]+ [[eE[+-][0-9]+]
```

例如：

```
constant w : Int := 55
constant x : Nat := 26085
constant y : Nat := 0x65E5
constant z : Float := 2.548123e-05
```

注意：负数是通过将负号前缀操作符应用于数字而得到的，例如：

```
constant w : Int := -55
```

<!-- 文档注释 -->
<!-- 一种特殊的注释形式，用于文档化模块和声明。 -->

```
   doc_comment: "/--" ([^-] | "-" [^/])* "-/"
   mod_doc_comment: "/-!" ([^-] | "-" [^/])* "-/"
```

字段表示法
=========

在表达式中使用尾部字段表示法标记，例如 ``(1+1).to_string``。注意，``a.toString`` 是一个单独的[标识符](#identifiers)，但解析器可能将其解释为字段表示法表达式。

```
   field_notation: "." ([0-9]+ | atomic_ident)
```

