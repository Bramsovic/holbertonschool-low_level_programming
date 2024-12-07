Voici un exemple complet de fichier `README.md` pour votre projet, en utilisant une mise en forme cohérente avec des blocs de code (```) comme demandé :

```markdown
# File I/O Project

## Resources

### Read or watch:
- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [How to Use the I/O System Calls Open, Close, Read and Write](https://man7.org/linux/man-pages/man2/open.2.html)
- [C Programming in Linux Tutorial - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)

### man or help:
- `open`
- `close`
- `read`
- `write`
- `dprintf`

---

## Learning Objectives

At the end of this project, you should be able to explain the following concepts, without the help of Google:

### General
- How to search for the right sources of information online.
- How to create, open, close, read, and write files.
- What are file descriptors?
- The 3 standard file descriptors, their purposes, and their POSIX names.
- How to use the I/O system calls: `open`, `close`, `read`, and `write`.
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR`.
- What are file permissions and how to set them when creating a file with the `open` system call.
- What is a system call?
- The difference between a function and a system call.

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`.
- All your files will be compiled on **Ubuntu 20.04 LTS** using `gcc`, with the following options:  
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All your files should end with a new line.
- A `README.md` file at the root of the project is **mandatory**.
- Your code should use the **Betty style** and will be checked with `betty-style.pl` and `betty-doc.pl`.
- **Global variables are forbidden**.
- No more than **5 functions per file**.
- Allowed standard library functions: `malloc`, `free`, `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- You are allowed to use `_putchar`, but you don’t have to push `_putchar.c`.
- You must push your header file and include it in all your code (`main.h`).
- Your header files should be protected against multiple inclusions.

---

## Tasks

### 0. Tread lightly, she is near
**Write a function that reads a text file and prints it to the POSIX standard output.**

- **Prototype**:  
  ```c
  ssize_t read_textfile(const char *filename, size_t letters);
  ```
- **Requirements**:
  - Returns the actual number of letters it could read and print.
  - If the file cannot be opened or read, return 0.
  - If `filename` is `NULL`, return 0.
  - If `write` fails or does not write the expected amount of bytes, return 0.

---

### 1. Under the snow
**Create a function that creates a file.**

- **Prototype**:  
  ```c
  int create_file(const char *filename, char *text_content);
  ```
- **Requirements**:
  - Returns: `1` on success, `-1` on failure.
  - The created file must have the permissions `rw-------`.
  - If the file already exists, truncate it.
  - If `filename` is `NULL`, return `-1`.
  - If `text_content` is `NULL`, create an empty file.

---

### 2. Speak gently, she can hear
**Write a function that appends text at the end of a file.**

- **Prototype**:  
  ```c
  int append_text_to_file(const char *filename, char *text_content);
  ```
- **Requirements**:
  - Returns: `1` on success, `-1` on failure.
  - Do not create the file if it does not exist.
  - If `filename` is `NULL`, return `-1`.
  - If `text_content` is `NULL`, do not add anything to the file.

---

### 3. cp
**Write a program that copies the content of a file to another file.**

- **Usage**:  
  ```bash
  cp file_from file_to
  ```
- **Requirements**:
  - If the number of arguments is incorrect, exit with code `97`.
  - If `file_from` cannot be read, exit with code `98`.
  - If `file_to` cannot be created or written to, exit with code `99`.
  - If a file descriptor cannot be closed, exit with code `100`.
  - Permissions of the created file: `rw-rw-r--`.
  - You must read 1,024 bytes at a time from `file_from` to reduce system calls.
  - Use `dprintf`.

---

## Repository Structure

```bash
holbertonschool-low_level_programming/
└── file_io/
    ├── 0-read_textfile.c
    ├── 1-create_file.c
    ├── 2-append_text_to_file.c
    ├── 3-cp.c
    ├── main.h
    ├── 0-main.c
    ├── 1-main.c
    ├── 2-main.c
    ├── 3-main.c
    └── README.md
```

---

## Compilation and Testing

### Compilation
Use the following command to compile:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <task_file.c> -o <output_name>
```

### Example
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
./a Requiescat
```

---

## Tips
- Always prefer symbolic constants (e.g., `STDIN_FILENO`) instead of numeric values (`0`).
- Use buffers efficiently to minimize system calls.
- Test your code thoroughly with edge cases.
```