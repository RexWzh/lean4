## 自动边界隐含参数

在上一节中，我们展示了隐含参数如何使函数的使用更加方便。然而，像 `compose` 这样的函数定义仍然相当冗长。需要注意的是，宇宙多态的 `compose` 比之前定义的那个还要冗长。

```lean
universe u v w
def compose {α : Type u} {β : Type v} {γ : Type w}
            (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)
```

你可以在定义 `compose` 函数时提供宇宙参数来避免使用 `universe` 命令。

```lean
def compose.{u, v, w}
            {α : Type u} {β : Type v} {γ : Type w}
            (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)
```

Lean 4支持一种名为 *auto bound implicit arguments* 的新特性。它使得诸如`compose`这样的函数更加便捷。当Lean处理声明的头部时，如果一个未绑定的标识符是一个单个的小写字母或希腊字母，那么它会自动作为一个隐式参数添加进去。有了这个特性，我们可以将`compose`写成下面的形式：

```lean
def compose (g : β → γ) (f : α → β) (x : α) : γ :=
  g (f x)

#check @compose
-- {β : Sort u_1} → {γ : Sort u_2} → {α : Sort u_3} → (β → γ) → (α → β) → α → γ
```

请注意，Lean 使用 `Sort` 而不是 `Type` 推断出了一个更一般的类型。

尽管我们喜欢这个功能并且在实现 Lean 时广泛使用它，
但我们意识到一些用户可能对此感到不适。因此，你可以使用命令 `set_option autoImplicit false` 来禁用它。

```lean
set_option autoImplicit false
/- The following definition produces `unknown identifier` errors -/
-- def compose (g : β → γ) (f : α → β) (x : α) : γ :=
--   g (f x)
```

Lean 语言服务器向编辑器提供[语义高亮](./semantic_highlighting.md)信息，并且它提供了视觉反馈，告知一个标识符是否被解释为一个自动绑定的隐式参数。