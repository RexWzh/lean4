# 其他命令

In addition to the basic commands we have discussed so far, there are a few other commands that can be useful when working with Lean.

## Print

The `#print` command is used to display the type or value of an expression. For example, if we have an expression `x` and we want to know its type, we can use `#print` as follows:

```lean
variable x : ℕ
#print x
```

This will display the type of `x` as `ℕ`, which represents the set of natural numbers.

## Check

The `#check` command is used to verify that a particular expression is well-formed. It can be useful for debugging purposes to check if the syntax of an expression is correct. For example, if we have an expression `x + y` and we want to make sure that it is a valid expression, we can use `#check` as follows:

```lean
variable x : ℕ
variable y : ℕ
#check x + y
```

If `x` and `y` are both natural numbers, the `#check` command will not raise any errors.

## Eval

The `#eval` command is used to evaluate an expression and compute its value. For example, if we have an expression `x + y` and we want to compute its value, we can use `#eval` as follows:

```lean
variable x : ℕ
variable y : ℕ
#eval x + y
```

This will compute the sum of `x` and `y` and display the result.

## Coercion

The `#coercion` command allows us to define coercions between types. Coercions are used to automatically convert between types when needed. For example, if we have defined a type `foo` and we want to coerce it to type `bar`, we can use `#coercion` as follows:

```lean
universe u
def foo : Type u := ...
def bar : Type u := ...
#coercion foo bar
```

This will allow Lean to automatically convert values of type `foo` to type `bar` when needed.

These are just a few examples of the additional commands available in Lean. The Lean documentation provides more information on these and other commands that can be useful for various purposes.