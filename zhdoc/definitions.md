## Strictly convex set

A set $C \subseteq \mathbb{R}^n$ is said to be strictly convex if for any two distinct points $x, y \in C$ and for any $\lambda \in (0, 1)$, the following condition holds:

\[
\lambda x + (1-\lambda) y \in C
\]

In other words, every point on the line segment connecting $x$ and $y$, except for $x$ and $y$ themselves, is also in $C$.

## Convex function

A function $f: \mathbb{R}^n \to \mathbb{R}$ is said to be convex if for any two points $x, y \in \mathbb{R}^n$ and for any $\lambda \in (0, 1)$, the following inequality holds:

\[
f(\lambda x + (1-\lambda) y) \leq \lambda f(x) + (1-\lambda) f(y)
\]

In other words, the value of the function at any point on the line segment connecting $x$ and $y$ is less than or equal to the convex combination of the values of the function at $x$ and $y$.

## Strong convexity

A function $f: \mathbb{R}^n \to \mathbb{R}$ is said to be strongly convex with parameter $m > 0$ if for any two points $x, y \in \mathbb{R}^n$ and for any $\lambda \in (0, 1)$, the following inequality holds:

\[
f(\lambda x + (1-\lambda) y) \leq \lambda f(x) + (1-\lambda) f(y) - \frac{1}{2} m \lambda (1-\lambda) \|x-y\|^2
\]

In other words, the value of the function at any point on the line segment connecting $x$ and $y$ is less than or equal to the convex combination of the values of the function at $x$ and $y$, with an additional term that penalizes the distance between $x$ and $y$. The parameter $m$ can be thought of as a measure of how strongly the function is convex.

# Statement of the theorem

The LEAN theorem states that if a function $f: \mathbb{R}^n \to \mathbb{R}$ is differentiable and strongly convex with parameter $m > 0$, then for any $x, y \in \mathbb{R}^n$, we have:

\[
f(y) \geq f(x) + \nabla f(x)^T (y-x) + \frac{1}{2} m \|y-x\|^2
\]

In other words, the value of the function at $y$ is greater than or equal to the value of the function at $x$, plus the inner product of the gradient of the function at $x$ with the difference between $y$ and $x$, plus a term that penalizes the distance between $y$ and $x$.

This inequality provides a lower bound on the difference between the values of the function at two points, which can be useful in optimization and analysis problems.