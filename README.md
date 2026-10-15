# C-Fundamentals-2
# Functions in C

## 1. What Is a Function?

A function is a reusable block of code that performs a specific task.

Functions help us:
- Reuse code instead of writing it multiple times.
- Organize programs into smaller parts.
- Make code easier to read and maintain.
- Divide complex problems into simpler tasks.

## 2. Basic Function Syntax

```c
return_type function_name(parameters)
{
    // Code to execute
    return value;
}
```

Explanation:

- `return_type`: The type of value the function returns, such as `int`, `float`, or `char`. Use `void` if it returns no value.
- `function_name`: The name used to call the function.
- `parameters`: Values the function receives. A function can have zero or more parameters.
- `{ }`: The body containing the function's instructions.
- `return`: Sends a value back to the code that called the function, when a value is required.

## 3. A Simple Function

```c
#include <stdio.h>

void sayHello(void)
{
    printf("Hello, World!\n");
}

int main(void)
{
    sayHello();

    return 0;
}
```

Output:

```text
Hello, World!
```

Explanation:

- `void sayHello(void)` defines a function named `sayHello`.
- The first `void` means the function does not return a value.
- The second `void` means the function accepts no arguments.
- `sayHello();` calls the function.
- `main()` is where program execution begins.

## 4. Functions With Parameters

Parameters allow functions to receive information.

```c
#include <stdio.h>

void greet(int age)
{
    printf("Your age is %d\n", age);
}

int main(void)
{
    greet(18);
    greet(20);

    return 0;
}
```

Output:

```text
Your age is 18
Your age is 20
```

Explanation:

- `int age` is a parameter.
- `greet(18)` passes `18` as an argument.
- The function receives the argument and uses it in `printf()`.

**Parameter:** A variable declared in the function definition.

**Argument:** A value passed to the function when it is called.

## 5. Functions That Return Values

A function can calculate a value and return it to the caller.

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int result = add(5, 3);

    printf("%d\n", result);

    return 0;
}
```

Output:

```text
8
```

Explanation:

- `int add(int a, int b)` defines a function that returns an integer.
- `a` and `b` receive the arguments.
- `return a + b;` returns the sum.
- `add(5, 3)` evaluates to `8`.
- The result is stored in the variable `result`.

## 6. The `void` Return Type

Use `void` when a function does not return a value.

```c
void printMessage(void)
{
    printf("Learning C\n");
}
```

This function prints a message but does not return a result.

## 7. Function Prototypes

A function prototype declares a function before its definition.

```c
#include <stdio.h>

int multiply(int a, int b);

int main(void)
{
    printf("%d\n", multiply(4, 5));

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}
```

Output:

```text
20
```

Explanation:

- `int multiply(int a, int b);` is the prototype.
- It tells the compiler the function's name, return type, and parameter types.
- The function definition appears after `main()`.
- The semicolon ends the prototype.

Prototypes are especially useful when functions are defined after `main()` or in separate source files.

## 8. Functions With Multiple Parameters

A function can receive multiple parameters.

```c
#include <stdio.h>

int calculateSum(int a, int b, int c)
{
    return a + b + c;
}

int main(void)
{
    int result = calculateSum(10, 20, 30);

    printf("Sum: %d\n", result);

    return 0;
}
```

Output:

```text
Sum: 60
```

The arguments are assigned to parameters in order:

- `a = 10`
- `b = 20`
- `c = 30`

## 9. Local Variables

A local variable is declared inside a function or block and is only accessible within its scope.

```c
#include <stdio.h>

void showNumber(void)
{
    int number = 10;
    printf("%d\n", number);
}

int main(void)
{
    showNumber();

    return 0;
}
```

The variable `number` belongs to the scope of `showNumber()`. You cannot access it directly from `main()`.

## 10. The `return` Statement

The `return` statement ends a function and can send a value back to its caller.

```c
int square(int n)
{
    return n * n;
}
```

For example, `square(4)` returns `16`.

In a `void` function, you can use `return;` to exit early, but you cannot return a value.

## 11. Standard Library Functions

C provides built-in library functions that you can use by including the appropriate header.

Examples:

| Function | Purpose | Header |
|---|---|---|
| `printf()` | Prints formatted output | `stdio.h` |
| `scanf()` | Reads formatted input | `stdio.h` |
| `strlen()` | Gets a string's length | `string.h` |
| `sqrt()` | Calculates a square root | `math.h` |

Example:

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("%.0f\n", sqrt(25.0));

    return 0;
}
```

Output:

```text
5
```

When compiling with GCC on systems that require it, use `-lm` to link the math library:

```bash
gcc main.c -o main -lm
```

## 12. Common Mistakes

### Forgetting the parentheses

Incorrect:

```c
sayHello;
```

Correct:

```c
sayHello();
```

### Forgetting the semicolon after a function call

Incorrect:

```c
sayHello()
```

Correct:

```c
sayHello();
```

### Returning the wrong type

Incorrect:

```c
int getNumber(void)
{
    return 3.5;
}
```

Correct:

```c
int getNumber(void)
{
    return 3;
}
```

The first version converts the floating-point value to an integer, discarding the fractional part. Return a `float` or `double` if you need the fractional part.

### Using a value-returning function without returning a value

A non-`void` function should return an appropriate value on every path where its result is used.


## 13. Summary

- A function is a reusable block of code.
- Parameters allow a function to receive values.
- Arguments are the values passed when calling a function.
- A return type specifies the type of value returned.
- `void` means no return value or, in a parameter list, no parameters.
- `return` sends a value back and ends the function.
- A prototype declares a function before its definition.
- Local variables are limited to their scope.
- Functions make programs more organized, reusable, and easier to maintain.
