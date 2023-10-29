# 枚举类型

最简单的归纳类型就是一个具有有限的、枚举的元素列表的类型。
以下命令声明了一个枚举类型 `Weekday`。

```lean
inductive Weekday where
  | sunday    : Weekday
  | monday    : Weekday
  | tuesday   : Weekday
  | wednesday : Weekday
  | thursday  : Weekday
  | friday    : Weekday
  | saturday  : Weekday
```

`Weekday` 类型有 7 个构造函数/元素。这些构造函数位于 `Weekday` 命名空间中。

将 `sunday`、`monday`、...、`saturday` 视为 `Weekday` 的不同元素，它们之间没有其他区别特性。

```lean
# inductive Weekday where
#  | sunday    : Weekday
#  | monday    : Weekday
#  | tuesday   : Weekday
#  | wednesday : Weekday
#  | thursday  : Weekday
#  | friday    : Weekday
#  | saturday  : Weekday
#check Weekday.sunday   -- Weekday
#check Weekday.monday   -- Weekday
```

你可以通过模式匹配来定义函数。
下面的函数将 `Weekday` 转换为自然数。

```lean
# inductive Weekday where
#  | sunday    : Weekday
#  | monday    : Weekday
#  | tuesday   : Weekday
#  | wednesday : Weekday
#  | thursday  : Weekday
#  | friday    : Weekday
#  | saturday  : Weekday
def natOfWeekday (d : Weekday) : Nat :=
  match d with
  | Weekday.sunday    => 1
  | Weekday.monday    => 2
  | Weekday.tuesday   => 3
  | Weekday.wednesday => 4
  | Weekday.thursday  => 5
  | Weekday.friday    => 6
  | Weekday.saturday  => 7

#eval natOfWeekday Weekday.tuesday -- 3
```

将与类型相关的定义放在同名的命名空间中，通常是很有用的。例如，我们可以将上面的函数放在 `Weekday` 命名空间中。然后，在打开该命名空间时，我们可以使用较短的名称。

在下面的示例中，我们在命名空间 `Weekday` 中定义了从 `Weekday` 到 `Weekday` 的函数。

```lean
# inductive Weekday where
#  | sunday    : Weekday
#  | monday    : Weekday
#  | tuesday   : Weekday
#  | wednesday : Weekday
#  | thursday  : Weekday
#  | friday    : Weekday
#  | saturday  : Weekday
namespace Weekday

def next (d : Weekday) : Weekday :=
  match d with
  | sunday    => monday
  | monday    => tuesday
  | tuesday   => wednesday
  | wednesday => thursday
  | thursday  => friday
  | friday    => saturday
  | saturday  => sunday

end Weekday
```

在 Lean 中，使用 `match` 语法来定义函数是非常常见的，因此 Lean 提供了一个语法糖来简化这个过程。

```lean
# inductive Weekday where
#  | sunday    : Weekday
#  | monday    : Weekday
#  | tuesday   : Weekday
#  | wednesday : Weekday
#  | thursday  : Weekday
#  | friday    : Weekday
#  | saturday  : Weekday
# namespace Weekday
def previous : Weekday -> Weekday
  | sunday    => saturday
  | monday    => sunday
  | tuesday   => monday
  | wednesday => tuesday
  | thursday  => wednesday
  | friday    => thursday
  | saturday  => friday
# end Weekday
```

我们可以使用 `#eval` 命令来测试我们定义的内容。

```lean
# inductive Weekday where
#  | sunday    : Weekday
#  | monday    : Weekday
#  | tuesday   : Weekday
#  | wednesday : Weekday
#  | thursday  : Weekday
#  | friday    : Weekday
#  | saturday  : Weekday
# namespace Weekday
# def next (d : Weekday) : Weekday :=
#  match d with
#  | sunday    => monday
#  | monday    => tuesday
#  | tuesday   => wednesday
#  | wednesday => thursday
#  | thursday  => friday
#  | friday    => saturday
#  | saturday  => sunday
# def previous : Weekday -> Weekday
#  | sunday    => saturday
#  | monday    => sunday
#  | tuesday   => monday
#  | wednesday => tuesday
#  | thursday  => wednesday
#  | friday    => thursday
#  | saturday  => friday
def toString : Weekday -> String
  | sunday    => "Sunday"
  | monday    => "Monday"
  | tuesday   => "Tuesday"
  | wednesday => "Wednesday"
  | thursday  => "Thursday"
  | friday    => "Friday"
  | saturday  => "Saturday"

#eval toString (next sunday)             -- "Monday"
#eval toString (next tuesday)            -- "Wednesday"
#eval toString (previous wednesday)      -- "Tuesday"
#eval toString (next (previous sunday))  -- "Sunday"
#eval toString (next (previous monday))  -- "Monday"
-- ..
# end Weekday
```

我们现在可以证明对于任意星期几 ``d``，``next (previous d) = d`` 是成立的。
思路是通过使用 `match` 进行分情况证明，并依赖于对于每个构造函数来说，等式两边都可以化简为相同的表达式这一事实。

```lean
# inductive Weekday where
#  | sunday    : Weekday
#  | monday    : Weekday
#  | tuesday   : Weekday
#  | wednesday : Weekday
#  | thursday  : Weekday
#  | friday    : Weekday
#  | saturday  : Weekday
# namespace Weekday
# def next (d : Weekday) : Weekday :=
#  match d with
#  | sunday    => monday
#  | monday    => tuesday
#  | tuesday   => wednesday
#  | wednesday => thursday
#  | thursday  => friday
#  | friday    => saturday
#  | saturday  => sunday
# def previous : Weekday -> Weekday
#  | sunday    => saturday
#  | monday    => sunday
#  | tuesday   => monday
#  | wednesday => tuesday
#  | thursday  => wednesday
#  | friday    => thursday
#  | saturday  => friday
theorem nextOfPrevious (d : Weekday) : next (previous d) = d :=
  match d with
  | sunday    => rfl
  | monday    => rfl
  | tuesday   => rfl
  | wednesday => rfl
  | thursday  => rfl
  | friday    => rfl
  | saturday  => rfl
# end Weekday
```

