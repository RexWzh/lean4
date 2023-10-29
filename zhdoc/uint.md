# 定点精度无符号整数

The Lean theorem prover is a powerful tool used to reason about formal mathematics. In this article, we will focus on proving properties of fixed precision unsigned integers using Lean.

Lean is a dependently-typed programming language, which means that the types can depend on values. This allows us to create types that represent fixed precision unsigned integers, where the precision is specified by a natural number.

To define fixed precision unsigned integers in Lean, we can use the `fin` type, which represents a subtype of natural numbers. The subtype is defined by specifying an upper bound for the elements of the subtype. For example, to define a fixed precision unsigned integer of size 5, we would use `fin 5`.

Here is an example of how we can define addition for fixed precision unsigned integers:

```lean
def add {n : ℕ} (a b : fin n) : fin n :=
  ⟨(a.val + b.val) % n, nat.mod_lt _ (nat.zero_lt_succ _)⟩
```

In this definition, `a` and `b` are fixed precision unsigned integers of size `n`. We add their values together, take the modulo `n` to ensure that the result stays within the bounds of the type, and create a new fixed precision unsigned integer with the resulting value.

To prove properties about fixed precision unsigned integers, we can use Lean's theorem proving capabilities. For example, we can prove that addition is commutative for any fixed precision unsigned integer.

```lean
theorem add_comm {n : ℕ} (a b : fin n) : add a b = add b a :=
  begin
    rw [add, add],
    congr' 1,
    apply nat.add_comm
  end
```

In this proof, we use the `rw` tactic to rewrite the left-hand side of the equation using the definition of addition. Then, we use the `congr'` tactic to prove that the values inside the `fin` type are equal. Finally, we apply the commutativity of addition for natural numbers.

Lean also provides other useful tactics and lemmas for reasoning about mathematical properties. By using these tools effectively, we can prove various properties of fixed precision unsigned integers in Lean.

Overall, Lean is a powerful tool for reasoning about formal mathematics, including fixed precision unsigned integers. By using its dependently-typed language and theorem proving capabilities, we can define and prove properties of these types, ensuring the correctness of our reasoning.