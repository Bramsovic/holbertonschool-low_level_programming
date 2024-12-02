# Singly Linked Lists Project

## Resources
### Read or Watch:
- [Linked Lists](https://en.wikipedia.org/wiki/Linked_list)
- Google
- YouTube

## Learning Objectives
At the end of this project, you should be able to explain to anyone, **without the help of Google**:

### General
- When and why you should use linked lists versus arrays.
- How to build and use linked lists.

## Requirements
### General
- **Allowed editors**: `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 20.04 LTS** using `gcc`, with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- A `README.md` file, at the root of the project folder, is **mandatory**.
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global variables** are not allowed.
- No more than **5 functions per file**.
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- You are allowed to use `_putchar`.
- You don’t have to push `_putchar.c`; it will be provided. If you do push it, it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, they won’t be taken into account). We will use our own `main.c` files at compilation, which might be different from the examples provided.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`.
- Don’t forget to push your header file.
- All your header files should be **include guarded**.

### Data Structure
Please use the following data structure for this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Tasks
### 0. Print List
Write a function that prints all the elements of a `list_t` list.

- **Prototype**: `size_t print_list(const list_t *h);`
- **Return**: the number of nodes
- **Format**: `[len] str`, see example
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`

**File**: `0-print_list.c`

### 1. List Length
Write a function that returns the number of elements in a linked `list_t` list.

- **Prototype**: `size_t list_len(const list_t *h);`

**File**: `1-list_len.c`

### 2. Add Node
Write a function that adds a new node at the beginning of a `list_t` list.

- **Prototype**: `list_t *add_node(list_t **head, const char *str);`
- **Return**: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

**File**: `2-add_node.c`

### 3. Add Node at the End
Write a function that adds a new node at the end of a `list_t` list.

- **Prototype**: `list_t *add_node_end(list_t **head, const char *str);`
- **Return**: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

**File**: `3-add_node_end.c`

### 4. Free List
Write a function that frees a `list_t` list.

- **Prototype**: `void free_list(list_t *head);`

**File**: `4-free_list.c`

## Repository
- **GitHub repository**: `holbertonschool-low_level_programming`
- **Directory**: `singly_linked_lists`

### File Structure Summary:
- **Directory**: `singly_linked_lists`
- **Files**:
  - `README.md`: Overview of the project, requirements, and tasks.
  - `lists.h`: Header file containing function prototypes and the definition of the `list_t` structure.
  - `0-print_list.c`: Function to print all elements of a `list_t` list.
  - `1-list_len.c`: Function to return the number of elements in a `list_t` list.
  - `2-add_node.c`: Function to add a new node at the beginning of a `list_t` list.
  - `3-add_node_end.c`: Function to add a new node at the end of a `list_t` list.
  - `4-free_list.c`: Function to free a `list_t` list.

### Example Compilation and Testing
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
./a
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
./b
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
./c
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
./d
```

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
valgrind ./e
```

This project will help you get comfortable with linked list operations, including traversal, adding nodes, and freeing up memory in dynamic data structures.
