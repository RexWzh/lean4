# 命名空间

Lean 提供了将定义分组到嵌套的层级化的 *命名空间* 中的能力：

```lean
namespace Foo
  def a : Nat := 5
  def f (x : Nat) : Nat := x + 7

  def fa : Nat := f a
  def ffa : Nat := f (f a)

  #check a
  #check f
  #check fa
  #check ffa
  #check Foo.fa
end Foo

-- #check a  -- error
-- #check f  -- error
#check Foo.a
#check Foo.f
#check Foo.fa
#check Foo.ffa

open Foo

#check a
#check f
#check fa
#check Foo.fa
```

当我们声明我们正在工作的命名空间为``Foo``时，我们声明的每个标识符都有以“``Foo.``”为前缀的全名。在命名空间中，我们可以使用较短的名称来引用标识符，但一旦退出命名空间，我们就必须使用较长的名称。

``open``命令将较短的名称引入当前上下文。通常，当我们导入一个模块时，我们希望打开其中一个或多个命名空间，以便访问短标识符。但有时我们希望隐藏这些信息，例如当它们与我们想使用的另一个命名空间中的标识符冲突时。因此，命名空间给了我们管理工作环境的一种方法。

例如，Lean将涉及列表的定义和定理分组到一个名为``List``的命名空间中。

```lean
#check List.nil
#check List.cons
#check List.map
```

下面我们将讨论它们的类型。命令 ``open List`` 允许我们使用较短的名称：

```lean
open List

#check nil
#check cons
#check map
```

与章节一样，命名空间可以嵌套：

```lean
namespace Foo
  def a : Nat := 5
  def f (x : Nat) : Nat := x + 7

  def fa : Nat := f a

  namespace Bar
    def ffa : Nat := f (f a)

    #check fa
    #check ffa
  end Bar

  #check fa
  #check Bar.ffa
end Foo

#check Foo.fa
#check Foo.Bar.ffa

open Foo

#check fa
#check Bar.ffa
```

已经关闭的命名空间以后可以重新打开，即使是在另一个文件中：

```cpp
namespace MyNamespace {
    void MyFunction() {
        // Function body
    }
}

int main() {
    // Call a function in MyNamespace
    MyNamespace::MyFunction();
    
    // Close the namespace
    namespace MyNamespace = {};
    
    // Call the function again
    MyNamespace::MyFunction(); // Error: 'MyNamespace' has been closed
    
    // Reopen the namespace
    namespace MyNamespace {
        void MyFunction() {
            // New function body
        }
    }
    
    // Call the function again
    MyNamespace::MyFunction(); // This will call the new function body
}
```

在上面的示例中，我们首先在一个命名空间 `MyNamespace` 中定义了一个函数 `MyFunction`。我们可以在 `main` 函数中通过 `MyNamespace::MyFunction()` 来调用它。

然后，我们关闭了命名空间 `MyNamespace`，通过 `namespace MyNamespace = {};` 将其置为空。这意味着无法再通过 `MyNamespace::MyFunction()` 来访问该函数。

但是，在重新打开命名空间之前，我们尝试再次调用函数 `MyNamespace::MyFunction()`，这将会导致编译错误，因为命名空间 `MyNamespace` 已被关闭。

接下来，我们重新打开了命名空间 `MyNamespace`，并在其中定义了一个新的函数体。现在，我们可以通过 `MyNamespace::MyFunction()` 来调用新的函数体。

这表明，尽管命名空间在某个地方被关闭，我们仍然可以在以后的代码中重新打开它，甚至是在另一个文件中。重新打开命名空间可以允许我们在不同的时间和地点对命名空间中的内容进行修改和访问。

```lean
namespace Foo
  def a : Nat := 5
  def f (x : Nat) : Nat := x + 7

  def fa : Nat := f a
end Foo

#check Foo.a
#check Foo.f

namespace Foo
  def ffa : Nat := f (f a)
end Foo
```

与章节类似，嵌套的命名空间必须按照被打开的顺序进行关闭。
命名空间和章节有不同的用途：命名空间用于组织数据，章节用于声明变量以供定义中插入使用。
章节也可以用于限定 ``set_option`` 和 ``open`` 等命令的作用域。

从许多方面来看，``namespace ... end`` 块与 ``section ... end`` 块的行为相同。
特别地，如果在命名空间中使用 ``variable`` 命令，它的作用域仅限于命名空间内部。
同样，如果在命名空间内部使用 ``open`` 命令，其作用在命名空间被关闭时会消失。