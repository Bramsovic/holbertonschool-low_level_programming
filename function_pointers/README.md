Below is an example of a **README.md** in English, summarizing the project requirements, tasks, and important details about function pointers. Feel free to adapt or modify it based on your needs.

---

# Function Pointers in C

## Description

This project focuses on **function pointers** in the C programming language. Function pointers allow you to treat functions as first-class objects, making it possible to implement callback functions or to dynamically choose which function to run at runtime.

By completing the tasks in this project, you’ll gain a solid understanding of how function pointers work in memory, how to properly use them to manipulate data, and how to apply them in practice through examples like array iteration, searching, and simple arithmetic operations.

---

## Learning Objectives

By the end of this project, you should be able to explain:

1. **Function Pointers**:  
   - What they are and how to use them  
   - What exactly a function pointer holds  
   - Where a function pointer points to in virtual memory  

2. **Practical Applications**:  
   - Passing a function pointer to another function  
   - Using function pointers for array iteration, element searching, and simple arithmetic

---

## Resources

To deepen your understanding, check out the following references:

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)  
- [Pointers to functions (CProgramming)](https://www.cprogramming.com/tutorial/function-pointers.html)  
- [Function Pointers in C/C++](https://en.cppreference.com/w/c/language/function_pointer)  
- [Why pointers to functions?](https://www.learn-c.org/en/Function_Pointers)  
- [Everything you need to know about pointers in C (freeCodeCamp)](https://www.freecodecamp.org/news/pointers-in-c/)  

---

## Requirements

1. **Allowed Editors**  
   - `vi`, `vim`, `emacs`

2. **Compilation**  
   - All code will be compiled on **Ubuntu 20.04 LTS** using `gcc`, with the following options:  
     ```bash
     -Wall -Werror -Wextra -pedantic -std=gnu89
     ```

3. **Code Style**  
   - Your code should follow the **Betty** style conventions (checked by `betty-style.pl` and `betty-doc.pl`).

4. **General Rules**  
   - Each file must end with a new line.
   - A `README.md` at the root of the project is mandatory.
   - You are **not allowed** to use global variables.
   - No more than **5 functions** per file.
   - The only allowed C standard library functions are `malloc`, `free`, and `exit`.
   - You **cannot** use `printf`, `puts`, `calloc`, `realloc`, or similar I/O functions.
   - You are allowed to use `_putchar`, but do not push `_putchar.c`; we will use our own.
   - You do not need to push any `main.c` files; they are for testing only.
   - All your function prototypes and the `_putchar` prototype should be in a header file named `function_pointers.h`, protected by include guards.

---

## Project Tasks

1. **0. What's my name**  
   - **Function**: `void print_name(char *name, void (*f)(char *));`  
   - Prints a name using a function pointer.

2. **1. If you spend too much time thinking about a thing, you'll never get it done**  
   - **Function**: `void array_iterator(int *array, size_t size, void (*action)(int));`  
   - Executes a function (given as a pointer) on each element of an array.

3. **2. To hell with circumstances; I create opportunities**  
   - **Function**: `int int_index(int *array, int size, int (*cmp)(int));`  
   - Searches for an integer in an array using a comparison function pointer. Returns the index of the first match or `-1` if no match is found or if size is invalid.

4. **3. A goal is not always meant to be reached, it often serves simply as something to aim at**  
   - Write a **simple calculator** program (`calc`) that can perform `+`, `-`, `*`, `/`, and `%` operations using function pointers. It must handle error conditions (invalid operator, zero division, etc.).

   You’ll need:
   - **3-calc.h**: Struct definition and function prototypes.
   - **3-op_functions.c**: Five functions (`op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`).
   - **3-get_op_func.c**: Returns the correct operation function based on the operator.
   - **3-main.c**: Entry point (reads input, picks the correct operation, and prints the result).

---

## Compilation and Usage

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file(s)>.c -o <output_name>
```

Example (for Task 3 calculator program):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
```

### Usage

For the calculator (`calc`), usage is:

```
./calc num1 operator num2
```

Examples:

```bash
./calc 1024 / 10
# Output: 102
```

```bash
./calc 1024 '%' 98
# Output: 44
```

---

## Example Test

```c
/* 0-main.c (example for task 0) */
#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    return (0);
}
```

Compile and run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_name.c -o a
./a
```

---

## Author

- Bramsovic
---

