# 什么是 Lean

Lean 是一种功能性编程语言，它使编写正确和易于维护的代码变得容易。
您还可以将 Lean 用作交互式定理证明器。

Lean 编程主要涉及定义类型和函数。
这使得您专注于问题领域和操作其数据，而不是编程的细节。

```lean
-- Defines a function that takes a name and produces a greeting.
def getGreeting (name : String) := s!"Hello, {name}! Isn't Lean great?"

-- The `main` function is the entry point of your program.
-- Its type is `IO Unit` because it can perform `IO` operations (side effects).
def main : IO Unit :=
  -- Define a list of names
  let names := ["Sebastian", "Leo", "Daniel"]

  -- Map each name to a greeting
  let greetings := names.map getGreeting

  -- Print the list of greetings
  for greeting in greetings do
    IO.println greeting
```

# Lean 的特性

Lean 是一种功能强大的证明助理，具有很多特性，包括：

- 类型推断
- 一等函数
- 强大的数据类型
- 模式匹配
- [类型类](./typeclass.md)
- [单子（Monads）](./monads/intro.md)
- [可扩展的语法](./syntax.md)
- 卫生宏
- [依赖类型](https://lean-lang.org/theorem_proving_in_lean4/dependent_type_theory.html)
- [元编程](./metaprogramming.md)
- 多线程支持
- 验证：可以使用 Lean 本身来证明函数的性质

Lean 是一门功能丰富的编程语言，被广泛应用于定理证明和形式化验证领域。它的设计目标是将计算和证明无缝结合，使得在编程过程中可以进行严格的形式化证明，从而增加代码的可靠性和可维护性。

其中，*类型推断* 是 Lean 的一个重要特性。Lean 能够根据上下文推断出表达式的类型，因此大大减少了类型注释的需求，使得代码更加简洁并且易读。

Lean 支持 *一等函数*，即函数可以被当作普通的值进行传递和操作。这使得编写高阶函数和函数式编程风格变得更加方便和灵活。

*强大的数据类型* 是 Lean 的又一个重要特性。Lean 提供了多种数据类型，包括自然数、整数、列表、向量等，以及标准的数学结构，如有理数、实数等。这些数据类型能够很好地支持数学推理和证明过程。

*模式匹配* 是 Lean 中用来处理复杂数据结构的一种强大的工具。使用模式匹配，可以方便地从复杂的数据中提取信息，进行相应的处理。

*类型类* 是 Lean 中一种抽象机制，它提供了一种通用的方法来解决多态性和继承的问题。通过类型类，可以实现参数多态而不依赖于继承关系，提高了编程的灵活性。

*单子（Monads）* 是一种用于描述计算过程的抽象结构。Lean 提供了对单子的原生支持，这使得在 Lean 中编写涉及副作用的代码变得更加直观和可维护。

Lean 支持 *可扩展的语法*，通过宏系统使得用户可以自定义和扩展新的语法规则。这为 Lean 提供了更高的灵活性和可定制性。

*卫生宏* 是一种安全的宏机制，它确保了宏展开的结果不会与周围的代码产生冲突，从而保证了代码的正确性和一致性。

*依赖类型* 是 Lean 的核心特性之一，它使得类型能够依赖于值。这使得 Lean 可以进行更加精确的类型检查和证明，从而大大提高了代码的可靠性和安全性。

Lean 还支持 *元编程*，可以在运行时生成代码，并且可以通过宏系统进行程序的自动化和优化。

另外，Lean 还具备对 *多线程* 的支持，可以充分利用多核处理器的计算能力，提高程序的执行效率。

最重要的是，Lean 作为一个证明助理，可以验证程序的性质，通过编写形式化的证明来确保代码的正确性。这一特性是 Lean 的核心功能之一，使得程序的验证过程变得简单而可靠。

总之，Lean 是一个强大而灵活的编程语言，通过提供丰富的特性和工具，为形式化验证和定理证明提供了强大的支持。它的设计使得代码可以被精确地描述、验证和推理，从而提高了代码的可靠性和可维护性。