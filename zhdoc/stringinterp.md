# 字符串插值

`s!` 前缀将一个字符串字面量标识为一个插值字符串。
插值字符串是一个可能包含插值表达式的字符串字面量。
当一个插值字符串解析为一个结果字符串时，带有插值表达式的项目会被表达式结果的字符串表示所替换。多态方法 `toString` 被用来将值转换成字符串。

与字符串复合格式化特性相比，字符串插值提供了一个更易读和方便的语法来创建格式化的字符串。下面的示例同时使用了两种特性来生成相同的输出：

```lean
def name := "John"
def age  := 28

#eval IO.println s!"Hello, {name}! Are you {age} years old?"

#eval IO.println ("Hello, " ++ name ++ "! Are you " ++ toString age ++ " years old?")

-- `println! <interpolated-string>` is a macro for `IO.println s!<interpolated-string>`
#eval println! "Hello, {name}! Are you {age} years old?"
```

# 插值字符串的结构

要将字符串文字标识为插值字符串，需要在其前面加上 `s!`。
花括号 `{}` 内部的项是普通的表达式，其类型实现了类型类 `ToString`。
要在插值字符串中包含大括号 `{`，需要使用 `\{` 进行转义。
可以在插值字符串内部嵌套插值字符串。

```lean
def vals := [1, 2, 3]

#eval IO.println s!"\{ vals := {vals} }"

#eval IO.println s!"variables: {vals.map (fun i => s!"x_{i}")}"
```

# `ToString` 实例

你可以为你自己的数据类型定义一个 `ToString` 实例。



```lean
structure Person where
  name : String
  age  : Nat

instance : ToString Person where
  toString : Person -> String
    | { name := n, age := v } => s!"\{ name := {n}, age := {v} }"

def person1 : Person := {
  name := "John"
  age  := 28
}

#eval println! "person1: {person1}"
```

