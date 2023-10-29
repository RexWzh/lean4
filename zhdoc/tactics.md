# 策略

策略是元程序，即创建程序的程序。Lean 是在 Lean 中实现的，可以使用 `import Lean` 导入其实现。`Lean` 包是 Lean 分布的一部分。您可以使用 `Lean` 包中的函数来编写自己的元程序，以自动化编写程序和证明时的重复任务。

我们提供了专为策略框架设计的**策略**领域特定语言（DSL）。策略 DSL 提供了用于创建术语（和证明）的命令。您无需导入 `Lean` 包即可使用策略 DSL。可以使用宏来实现简单的扩展。更复杂的扩展需要 `Lean` 包。用于编写 Lean 术语的符号可以轻松地扩展到策略 DSL。

策略是指示 Lean 如何构建术语或证明的指令。策略对漏洞（也称为目标）进行操作。每个漏洞表示正在尝试构建的术语中缺失的部分。内部上，这些漏洞被表示为元变量。它们有类型和局部上下文。局部上下文包含所有作用域中的局部变量。

在下面的例子中，我们使用不同的策略证明相同的简单定理。关键字 `by` 指示 Lean 使用策略 DSL 构建术语。我们最初的目标是一个类型为 `p ∨ q → q ∨ p` 的漏洞。策略 `intro h` 使用术语 `fun h => ?m` 填充了这个漏洞，其中 `?m` 是我们需要解决的一个新的漏洞。这个漏洞的类型是 `q ∨ p`，局部上下文包含 `h : p ∨ q`。策略 `cases` 使用 `Or.casesOn h (fun h1 => ?m1) (fun h2 => ?m2)` 填充了这个漏洞，其中 `?m1` 和 `?m2` 是新的漏洞。策略 `apply Or.inr` 使用应用 `Or.inr ?m3` 填充了漏洞 `?m1`，而 `exact h1` 使用 `h1` 填充了 `?m3`。策略 `assumption` 尝试通过在局部上下文中搜索具有相同类型的术语来填充漏洞。

```lean
theorem ex1 : p ∨ q → q ∨ p := by
  intro h
  cases h with
  | inl h1 =>
    apply Or.inr
    exact h1
  | inr h2 =>
    apply Or.inl
    assumption

#print ex1
/-
theorem ex1 : {p q : Prop} → p ∨ q → q ∨ p :=
fun {p q : Prop} (h : p ∨ q) =>
  Or.casesOn h (fun (h1 : p) => Or.inr h1) fun (h2 : q) => Or.inl h2
-/

-- You can use `match-with` in tactics.
theorem ex2 : p ∨ q → q ∨ p := by
  intro h
  match h with
  | Or.inl _  => apply Or.inr; assumption
  | Or.inr h2 => apply Or.inl; exact h2

-- As we have the `fun+match` syntax sugar for terms,
-- we have the `intro+match` syntax sugar
theorem ex3 : p ∨ q → q ∨ p := by
  intro
  | Or.inl h1 =>
    apply Or.inr
    exact h1
  | Or.inr h2 =>
    apply Or.inl
    assumption
```

上面的例子都是结构化的，但Lean 4仍支持非结构化证明。非结构化证明在创建可重用脚本时非常有用，这些脚本可能需要完成不同的目标。
以下是上述例子的非结构化版本。

```lean
lemma test_unstructured (a b : ℕ) : a + b = b + a :=
begin
  apply add_comm,
end
```

在这个非结构化版本的证明中，我们使用 `begin` 和 `end` 进行证明的开始和结束。在 `begin` 和 `end` 之间，我们可以使用各种策略来构建证明的步骤。在这个例子中，我们使用了 `apply add_comm` 策略，它使用加法交换律来完成证明。

在非结构化证明中，我们不需要按照特定的结构来组织证明步骤。这样可以更灵活地完成证明，特别适用于需要多次使用相同脚本的情况。

```lean
theorem ex1 : p ∨ q → q ∨ p := by
  intro h
  cases h
  apply Or.inr
  assumption
  apply Or.inl
  assumption
  done -- fails with an error here if there are unsolvable goals

theorem ex2 : p ∨ q → q ∨ p := by
  intro h
  cases h
  focus -- instructs Lean to `focus` on the first goal,
    apply Or.inr
    assumption
    -- it will fail if there are still unsolvable goals here
  focus
    apply Or.inl
    assumption

theorem ex3 : p ∨ q → q ∨ p := by
  intro h
  cases h
  -- You can still use curly braces and semicolons instead of
  -- whitespace sensitive notation as in the previous example
  { apply Or.inr;
    assumption
    -- It will fail if there are unsolved goals
  }
  { apply Or.inl;
    assumption
  }

-- Many tactics tag subgoals. The tactic `cases` tag goals using constructor names.
-- The tactic `case tag => tactics` instructs Lean to solve the goal
-- with the matching tag.
theorem ex4 : p ∨ q → q ∨ p := by
  intro h
  cases h
  case inr =>
    apply Or.inl
    assumption
  case inl =>
    apply Or.inr
    assumption

-- Same example for curly braces and semicolons aficionados
theorem ex5 : p ∨ q → q ∨ p := by {
  intro h;
  cases h;
  case inr => {
    apply Or.inl;
    assumption
  }
  case inl => {
    apply Or.inr;
    assumption
  }
}
```

## 重写

TODO

## 模式匹配

为了方便起见，模式匹配已经集成到了 `intro` 和 `funext` 等策略中。

```lean
theorem ex1 : s ∧ q ∧ r → p ∧ r → q ∧ p := by
  intro ⟨_, ⟨hq, _⟩⟩ ⟨hp, _⟩
  exact ⟨hq, hp⟩

theorem ex2 :
    (fun (x : Nat × Nat) (y : Nat × Nat) => x.1 + y.2)
    =
    (fun (x : Nat × Nat) (z : Nat × Nat) => z.2 + x.1) := by
  funext (a, b) (c, d)
  show a + d = d + a
  rw [Nat.add_comm]
```

## 归纳

`induction` 策略现在支持用户定义的多目标归纳原则（也称为主前提）。

```lean
/-
theorem Nat.mod.inductionOn
      {motive : Nat → Nat → Sort u}
      (x y  : Nat)
      (ind  : ∀ x y, 0 < y ∧ y ≤ x → motive (x - y) y → motive x y)
      (base : ∀ x y, ¬(0 < y ∧ y ≤ x) → motive x y)
      : motive x y :=
-/

theorem ex (x : Nat) {y : Nat} (h : y > 0) : x % y < y := by
  induction x, y using Nat.mod.inductionOn with
  | ind x y h₁ ih =>
    rw [Nat.mod_eq_sub_mod h₁.2]
    exact ih h
  | base x y h₁ =>
     have : ¬ 0 < y ∨ ¬ y ≤ x := Iff.mp (Decidable.not_and_iff_or_not ..) h₁
     match this with
     | Or.inl h₁ => exact absurd h h₁
     | Or.inr h₁ =>
       have hgt : y > x := Nat.gt_of_not_le h₁
       rw [← Nat.mod_eq_of_lt hgt] at hgt
       assumption
```

## 情况分析

TODO

## 注入

TODO

## 切割

`split` 策略可以用来将 if-then-else 语句或匹配语句的情况分割为新的子目标，然后可以逐个完成。

```lean
def addMoreIfOdd (n : Nat) := if n % 2 = 0 then n + 1 else n + 2

/- Examine each branch of the conditional to show that the result
   is always positive -/
example (n : Nat) : 0 < addMoreIfOdd n := by
  simp only [addMoreIfOdd]
  split
  next => exact Nat.zero_lt_succ _
  next => exact Nat.zero_lt_succ _
```



```lean
def binToChar (n : Nat) : Option Char :=
  match n with
  | 0 => some '0'
  | 1 => some '1'
  | _ => none

example (n : Nat) : (binToChar n).isSome -> n = 0 ∨ n = 1 := by
  simp only [binToChar]
  split
  next => exact fun _ => Or.inl rfl
  next => exact fun _ => Or.inr rfl
  next => intro h; cases h

/- Hypotheses about previous cases can be accessed by assigning them a
   name, like `ne_zero` below. Information about the matched term can also
   be preserved using the `generalizing` tactic: -/
example (n : Nat) : (n = 0) -> (binToChar n = some '0') := by
  simp only [binToChar]
  split
  case h_1 => intro _; rfl
  case h_2 => intro h; cases h
  /- Here, we can introduce `n ≠ 0` and `n ≠ 1` this case assumes
     neither of the previous cases matched. -/
  case h_3 ne_zero _  => intro eq_zero; exact absurd eq_zero ne_zero
```

## 依赖型模式匹配

`match-with` 表达式实现了依赖型模式匹配。您可以使用它来创建简洁的证明。



```lean
inductive Mem : α → List α → Prop where
  | head (a : α) (as : List α)   : Mem a (a::as)
  | tail (a b : α) (bs : List α) : Mem a bs → Mem a (b::bs)

infix:50 (priority := high) "∈" => Mem

theorem mem_split {a : α} {as : List α} (h : a ∈ as) : ∃ s t, as = s ++ a :: t :=
  match a, as, h with
  | _, _, Mem.head a bs     => ⟨[], ⟨bs, rfl⟩⟩
  | _, _, Mem.tail a b bs h =>
    match bs, mem_split h with
    | _, ⟨s, ⟨t, rfl⟩⟩ => ⟨b::s, ⟨t, List.cons_append .. ▸ rfl⟩⟩
```

在策略领域专用语言中，`match-with`中的每个备选项的右侧是一系列策略，而不是一个术语。下面是使用策略领域专用语言的类似证明示例。

```lean
# inductive Mem : α → List α → Prop where
#  | head (a : α) (as : List α)   : Mem a (a::as)
#  | tail (a b : α) (bs : List α) : Mem a bs → Mem a (b::bs)
# infix:50 (priority := high) "∈" => Mem
theorem mem_split {a : α} {as : List α} (h : a ∈ as) : ∃ s t, as = s ++ a :: t := by
  match a, as, h with
  | _, _, Mem.head a bs     => exists []; exists bs; rfl
  | _, _, Mem.tail a b bs h =>
    match bs, mem_split h with
    | _, ⟨s, ⟨t, rfl⟩⟩ =>
      exists b::s; exists t;
      rw [List.cons_append]
```

我们可以在策略中使用嵌套的 `match-with`。下面是一个使用 `induction` 策略而非递归的类似证明。

```coq
Lemma plus_O_n : forall n : nat, 0 + n = n.
Proof.
  intros n.
  (* 使用归纳策略来证明 *)
  induction n as [| n' IHn'].
  - (* n = 0 *)
    simpl. reflexivity.
  - (* n = S n' *)
    simpl. rewrite -> IHn'. reflexivity.
Qed.
```

注释：
- `intros n`：引入一个全称量化的变量 `n`。
- `induction n as [| n' IHn']`：对变量 `n` 进行归纳。分为两种情况：当 `n` 为 0 时，证明目标等式成立；当 `n` 表示 `S n'` 时，将归纳假设 `IHn'` 应用到目标上，并且使用 `simpl` 策略来对目标进行简化。
- `-` 用于标记每个子目标的开始。
- `simpl`：应用简化规则来简化目标表达式。
- `reflexivity`：用于证明两个相等的表达式。

这样，就完成了证明。

```lean
# inductive Mem : α → List α → Prop where
#  | head (a : α) (as : List α)   : Mem a (a::as)
#  | tail (a b : α) (bs : List α) : Mem a bs → Mem a (b::bs)
# infix:50 (priority := high) "∈" => Mem
theorem mem_split {a : α} {as : List α} (h : a ∈ as) : ∃ s t, as = s ++ a :: t := by
  induction as with
  | nil          => cases h
  | cons b bs ih => cases h with
    | head a bs => exact ⟨[], ⟨bs, rfl⟩⟩
    | tail a b bs h =>
      match bs, ih h with
      | _, ⟨s, ⟨t, rfl⟩⟩ =>
        exists b::s; exists t
        rw [List.cons_append]
```

你可以使用现有的策略创建自己的符号表示法。在下面的示例中，我们使用宏定义一个简单的 `obtain` 策略。我们称之为简单是因为它只需要一个判别式。稍后，我们将展示如何使用宏来创建更复杂的自动化过程。

```lean
# inductive Mem : α → List α → Prop where
#  | head (a : α) (as : List α)   : Mem a (a::as)
#  | tail (a b : α) (bs : List α) : Mem a bs → Mem a (b::bs)
# infix:50 (priority := high) "∈" => Mem
macro "obtain " p:term " from " d:term : tactic =>
  `(tactic| match $d:term with | $p:term => ?_)

theorem mem_split {a : α} {as : List α} (h : a ∈ as) : ∃ s t, as = s ++ a :: t := by
  induction as with
  | cons b bs ih => cases h with
    | tail a b bs h =>
      obtain ⟨s, ⟨t, h⟩⟩ from ih h
      exists b::s; exists t
      rw [h, List.cons_append]
    | head a bs => exact ⟨[], ⟨bs, rfl⟩⟩
  | nil => cases h

```

## 可扩展的策略

在下面的例子中，我们使用 `syntax` 命令为策略DSL定义了符号 `triv`。然后，我们使用 `macro_rules` 命令来指定当使用 `triv` 时应该执行什么操作。您可以提供不同的扩展，策略DSL解释器将尝试所有的扩展，直到找到一个成功的为止。

```lean
-- Define a new notation for the tactic DSL
syntax "triv" : tactic

macro_rules
  | `(tactic| triv) => `(tactic| assumption)

theorem ex1 (h : p) : p := by
  triv

-- You cannot prove the following theorem using `triv`
-- theorem ex2 (x : α) : x = x := by
--  triv

-- Let's extend `triv`. The `by` DSL interpreter
-- tries all possible macro extensions for `triv` until one succeeds
macro_rules
  | `(tactic| triv) => `(tactic| rfl)

theorem ex2 (x : α) : x = x := by
  triv

theorem ex3 (x : α) (h : p) : x = x ∧ p := by
  apply And.intro <;> triv
```

## `let-rec`

你可以使用 `let rec` 来编写局部递归函数。我们将它转换为了策略 DSL，并且你可以用它来创建归纳证明。

```lean
theorem length_replicateTR {α} (n : Nat) (a : α) : (List.replicateTR n a).length = n := by
  let rec aux (n : Nat) (as : List α)
      : (List.replicateTR.loop a n as).length = n + as.length := by
    match n with
    | 0   => rw [Nat.zero_add]; rfl
    | n+1 =>
      show List.length (List.replicateTR.loop a n (a::as)) = Nat.succ n + as.length
      rw [aux n, List.length_cons, Nat.add_succ, Nat.succ_add]
  exact aux n []
```

你还可以在定义之后使用 `where` 子句引入辅助递归声明。
Lean 会将它们转换为 `let rec`。

```lean
theorem length_replicateTR {α} (n : Nat) (a : α) : (List.replicateTR n a).length = n :=
  loop n []
where
  loop n as : (List.replicateTR.loop a n as).length = n + as.length := by
    match n with
    | 0   => rw [Nat.zero_add]; rfl
    | n+1 =>
      show List.length (List.replicateTR.loop a n (a::as)) = Nat.succ n + as.length
      rw [loop n, List.length_cons, Nat.add_succ, Nat.succ_add]
```

# 热爱 `begin ... end` 语法的人

如果你喜欢 Lean 3 中的 `begin ... end` 策略块和逗号，你可以使用少量的代码，在 Lean 4 中使用宏来定义这种记法。

```lean
{{#include ../tests/lean/beginEndAsMacro.lean:doc}}
```

