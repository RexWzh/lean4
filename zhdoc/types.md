# 类型

每种编程语言都需要一个类型系统，而 Lean 使用了一个丰富的可扩展归纳类型系统。

## 基本类型

Lean 内置了对以下基本类型的支持：

- [Bool](bool.md)：一个 `true` 或 `false` 的值。
- [Int](integers.md)：多精度整数（不会溢出）！
- [Nat](integers.md)：自然数，即非负整数（同样不会溢出）！
- [Float](float.md)：浮点数。
- [Char](char.md)：一个 Unicode 字符。
- [String](string.md)：一个由字符组成的 UTF-8 编码字符串。
- [Array](array.md)：一个动态（也就是可扩展）的、由类型化对象组成的数组。
- [List](list.md)：一个由类型化对象组成的链表。
- TODO：还有什么其他的？

而 Lean 也允许您使用以下方式创建自己的自定义类型：
- [Enumerated Types](enum.md)：归纳类型的特例。
- [Type Classes](typeclasses.md)：一种创建自定义多态性的方式。
- [Types as objects](typeobjs.md)：一种操作类型本身的方式。
- [Structures](struct.md)：一个具有命名和类型化字段的集合。实际上，结构是归纳数据类型的特例。
- [Inductive Types](inductive.md)：TODO：添加一个简要说明...

## Universe（宇宙）

在 Lean 中，每种类型本质上都是一个类型为 `Sort u` 的表达式，其中 `u` 是某个宇宙级别（universe level）。一个宇宙级别可以是以下几种中的一种：

* 自然数 `n`
* 宇宙变量 `u`（使用命令 `universe` 或 `universes` 声明）
* 表达式 `u + n`，其中 `u` 是一个宇宙级别，`n` 是一个自然数
* 表达式 `max u v`，其中 `u` 和 `v` 是宇宙级别
* 表达式 `imax u v`，其中 `u` 和 `v` 是宇宙级别

最后一个表达式如果 `v` 是 `0`，则表示宇宙级别为 `0`，否则为 `max u v`。

```lean
universe u v

#check Sort u                       -- Type u
#check Sort 5                       -- Type 4 : Type 5
#check Sort (u + 1)                 -- Type u : Type (u + 1)
#check Sort (u + 3)                 -- Type (u + 2) : Type (u + 3)
#check Sort (max u v)               -- Sort (max u v) : Type (max u v)
#check Sort (max (u + 3) v)         -- Sort (max (u + 3) v) : Type (max (u + 3) v)
#check Sort (imax (u + 3) v)        -- Sort (imax (u + 3) v) : Type (imax (u + 3) v)
#check Prop                         -- Type
#check Type                         -- Type 1
#check Type 1                       -- Type 1 : Type 2
```

