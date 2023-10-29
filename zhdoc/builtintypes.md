# 内建类型

## 数值运算

在 Lean 中，支持所有数字类型的基本数学运算，包括加法、减法、乘法、除法和取余。
以下代码展示了如何在 `def` 命令中使用每个数学运算符号：

```lean
-- addition
def sum := 5 + 10

-- subtraction
def difference := 95.5 - 4.3

-- multiplication
def product := 4 * 30

-- division
def quotient := 53.7 / 32.2

-- remainder/modulo
def modulo := 43 % 5
```

在这些语句中，每个表达式都使用了一个数学运算符，并且求值结果为一个单一的值。