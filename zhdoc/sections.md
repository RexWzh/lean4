# 变量和章节

考虑以下三个函数定义：

```lean
def compose (α β γ : Type) (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)

def doTwice (α : Type) (h : α → α) (x : α) : α :=
  h (h x)

def doThrice (α : Type) (h : α → α) (x : α) : α :=
  h (h (h x))
```

Lean为我们提供了``variable``命令，使这样的声明更加紧凑：

```lean
variable (α β γ : Type)

def compose (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)

def doTwice (h : α → α) (x : α) : α :=
  h (h x)

def doThrice (h : α → α) (x : α) : α :=
  h (h (h x))
```

我们可以声明任意类型的变量，而不仅仅是 ``Type`` 本身：

```lean
variable (α β γ : Type)
variable (g : β → γ) (f : α → β) (h : α → α)
variable (x : α)

def compose := g (f x)
def doTwice := h (h x)
def doThrice := h (h (h x))

#print compose
#print doTwice
#print doThrice
```

把它们打印出来，可以看到这三组定义完全相同。

``variable`` 命令指示 Lean 在引用它们的定义中将声明的变量作为绑定变量插入。
Lean 足够智能，可以找出在定义中显式或隐式使用哪些变量。因此，我们可以假设在编写定义时，“α”，“β”，“γ”，“g”，“f”，“h”和“x”都是固定对象，让 Lean 自动为我们抽象定义。

以这种方式声明的变量会在我们工作的文件的末尾保持有效。
然而，有时候限制变量的作用范围会很有用。为此，Lean 提供了“section”的概念：

```lean
section useful
  variable (α β γ : Type)
  variable (g : β → γ) (f : α → β) (h : α → α)
  variable (x : α)

  def compose := g (f x)
  def doTwice := h (h x)
  def doThrice := h (h (h x))
end useful
```

当代码块被关闭时，其中声明的变量就会超出作用域，只能成为遥远的回忆。

在代码块中，你不需要缩进每一行。你也可以不给代码块命名，也就是说，可以使用匿名的``section`` / ``end``配对。
然而，如果你给代码块命名了，就必须使用相同的名字来关闭它。
代码块也可以嵌套，这允许你逐步声明新的变量。