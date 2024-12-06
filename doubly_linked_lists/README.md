# Doubly Linked Lists Project

## Resources
Read or watch:
- [What is a Doubly Linked List](https://example.com/what-is-a-doubly-linked-list)

---

## Learning Objectives
At the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- What is a doubly linked list
- How to use doubly linked lists
- How to find the right source of information independently

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be interpreted/compiled on **Ubuntu 20.04 LTS** using `python3` (version 3.8.5)
- All files should end with a new line
- A `README.md` file at the root of the folder is mandatory
- Your code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Allowed C standard library functions: `malloc`, `free`, `printf`, `exit`
- All prototypes should be included in your header file `lists.h`
- All header files must be guarded using `#ifndef` and `#define`

---

## Data Structure
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

---

## Tasks

### 0. Print list
**File:** `0-print_dlistint.c`

Write a function that prints all the elements of a `dlistint_t` list.

- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Return:** the number of nodes
- **Example output:**
  ```
  9
  8
  -> 2 elements
  ```

---

### 1. List length
**File:** `1-dlistint_len.c`

Write a function that returns the number of elements in a linked `dlistint_t` list.

- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`

---

### 2. Add node
**File:** `2-add_dnodeint.c`

Write a function that adds a new node at the beginning of a `dlistint_t` list.

- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or `NULL` if it failed

---

### 3. Add node at the end
**File:** `3-add_dnodeint_end.c`

Write a function that adds a new node at the end of a `dlistint_t` list.

- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or `NULL` if it failed

---

### 4. Free list
**File:** `4-free_dlistint.c`

Write a function that frees a `dlistint_t` list.

- **Prototype:** `void free_dlistint(dlistint_t *head);`

---

### 5. Get node at index
**File:** `5-get_dnodeint.c`

Write a function that returns the nth node of a `dlistint_t` linked list.

- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- If the node does not exist, return `NULL`

---

### 6. Sum list
**File:** `6-sum_dlistint.c`

Write a function that returns the sum of all the data (`n`) of a `dlistint_t` linked list.

- **Prototype:** `int sum_dlistint(dlistint_t *head);`
- If the list is empty, return `0`

---

### 7. Insert at index
**File:** `7-insert_dnodeint.c`

Write a function that inserts a new node at a given position.

- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- Returns: the address of the new node, or `NULL` if it failed
- If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

---

### 8. Delete at index
**File:** `8-delete_dnodeint.c`

Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- Returns: `1` if it succeeded, `-1` if it failed

---

## Repo
- **GitHub repository:** `holbertonschool-low_level_programming`
- **Directory:** `doubly_linked_lists`

---

Happy coding! 🚀