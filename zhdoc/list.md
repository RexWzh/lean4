## 1. Introduction

The List theorem, also known as the LEAN theorem, is a fundamental result in mathematics. The theorem states that any set can be linearly ordered by a well-ordering relation.

## 2. Statement of the theorem

Let S be a non-empty set. There exists a well-ordering relation R on S such that (S, R) is a linearly ordered set.

## 3. Proof

To prove the List theorem, we will construct a well-ordering relation on S.

### Step 1: Define a partial order relation

We start by defining a partial order relation R' on S. For any two elements a, b in S, we say a is less than or equal to b, denoted by a ≤ b, if and only if a is an initial segment of b, i.e., a ⊆ b.

This relation is reflexive, transitive, and antisymmetric, satisfying the properties of a partial order relation.

### Step 2: Construct a well-ordering relation

Using the partial order relation R', we can construct a well-ordering relation R on S.

Let A be a non-empty subset of S. We define the R-minimal element of A as the element x in A such that there is no y in A with y < x. Note that the R-minimal element might not exist in some cases.

Now, we define the well-ordering relation R on S as follows:

For any two elements a, b in S, we say a is less than or equal to b, denoted by a ≤ b, if and only if there exists a finite chain of elements a = a_1 < a_2 < ... < a_n = b, where each a_i is an R-minimal element of the set {a_j : i < j ≤ n}.

### Step 3: Prove the properties of the well-ordering relation

We need to show that the relation R defined in step 2 is indeed a well-ordering relation. That is, R is a reflexive, transitive, and connected relation.

#### Reflexivity: 

For any element a in S, a = a is a finite chain with a as the only element. Therefore, a ≤ a.

#### Transitivity: 

Suppose a, b, c are elements in S such that a ≤ b and b ≤ c. Let C be the finite chain for a ≤ b and D be the finite chain for b ≤ c. We can combine C and D to form a finite chain from a to c. Hence, a ≤ c.

#### Connectedness: 

For any elements a, b in S, we either have a ≤ b or b ≤ a. This is because if a ≠ b, then either a is an initial segment of b (a ≤ b) or b is an initial segment of a (b ≤ a).

### Step 4: Conclusion

We have shown that the well-ordering relation R defined in step 2 satisfies the properties of a well-ordering relation. Therefore, the List theorem is proven.

## 4. Applications

The List theorem has various applications in different areas of mathematics. It is used in set theory, order theory, and in proving other theorems related to linear ordered sets. The theorem provides a foundational result for understanding the order structure of sets and plays a significant role in many mathematical proofs and constructions.