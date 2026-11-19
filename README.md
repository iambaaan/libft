
*This project has been created as part of the 42 curriculum by sael-atr.*

# Libft

## Description

**Libft** is an individual project from the 42 curriculum. Its goal is to create a personal C library by reimplementing a set of standard C library functions and developing additional utility functions.

The project provides an opportunity to understand how fundamental C functions work internally while strengthening essential programming concepts such as:

- Memory management and dynamic allocation.
- Pointers and memory addresses.
- String manipulation and character handling.
- Function pointers.
- Data structures, particularly singly linked lists.
- Compilation and static library creation.

The final result is a reusable static library named `libft.a`, which can be integrated into future C projects at 42.

## Library Contents

The library is divided into three main parts.

### Part 1: Libc Functions

This section consists of reimplementing selected functions from the standard C library. All functions use the `ft_` prefix.

| Category | Functions | Description |
|---|---|---|
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Checks character types and properties. |
| String length | `ft_strlen` | Calculates the length of a string. |
| Memory manipulation | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Manipulates and compares memory blocks. |
| String manipulation | `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Copies, concatenates, searches and compares strings. |
| Character conversion | `ft_toupper`, `ft_tolower` | Converts characters between uppercase and lowercase. |
| Number conversion | `ft_atoi` | Converts a string into an integer. |
| Memory allocation | `ft_calloc`, `ft_strdup` | Allocates and initializes memory or duplicates strings. |

### Part 2: Additional Functions

This section introduces additional utility functions for string manipulation, memory management and output operations.

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring from a given string. |
| `ft_strjoin` | Allocates and returns a new string containing two concatenated strings. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Applies a function to each character and returns a new string. |
| `ft_striteri` | Applies a function to each character using its address. |
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### Part 3: Linked List Functions

This section introduces singly linked lists using structures and pointers.

The linked list structure is defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:

- `content`: A pointer to the data stored in the node.
- `next`: A pointer to the next node in the list.

The following functions are implemented to manipulate linked lists:

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and returns a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Deletes a node and frees its content using a provided function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Instructions

### Requirements

To compile and use this library, you need:

- A C compiler (`cc`).
- GNU Make (`make`).
- The archive utility (`ar`).

```
### Compile the Library

Run the following command from the project root:

```bash
make
```

This compiles the source files and generates the static library:

```text
libft.a
```

### Makefile Rules

The Makefile provides the following commands:

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make all` | Builds the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a full clean and rebuild. |

Compilation is performed using:

```bash
cc -Wall -Wextra -Werror
```

The `ar` utility is used to create the static library.

### Using the Library

To use Libft in another C project, include the header file:

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *str;

    str = ft_strdup("Hello, 42!");
    if (!str)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compile your program and link it with the library:

```bash
make && cc -Wall -Wextra -Werror main.c libft.a -o program
```

Run the executable:

```bash
./program
```

Expected output:

```text
Hello, 42!
```

## Technical Considerations

| Aspect | Details |
|---|---|
| Programming language | C |
| Library type | Static library (`libft.a`) |
| Header file | `libft.h` |
| Compiler | `cc` |
| Compiler flags | `-Wall -Wextra -Werror` |
| Archive utility | `ar` |
| Coding standard | 42 Norm |
| Global variables | Forbidden |
| Memory management | Dynamically allocated memory must be properly freed. |
| Helper functions | Static functions are used for internal operations when appropriate. |

## Resources

The following resources were used to study C programming, understand standard library behavior and develop the functions in this project.

- [cppreference - C Library](https://en.cppreference.com/w/c) — Reference documentation for the C language and standard library.
- [Linux Manual Pages](https://man7.org/linux/man-pages/) — Documentation for standard functions and system calls.
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) — Detailed explanations of C library functions.
- [Learn-C.org](https://www.learn-c.org/) — Interactive C programming tutorials.
- 42 Intranet — Libft subject and project documentation.
- Peer learning and code reviews — Discussions and feedback from fellow students.

### AI Usage

AI tools were used to assist with organizing and drafting this README documentation.

AI assistance may also be used as a learning resource to clarify C programming concepts, understand function behavior, investigate errors and support debugging or testing.

The implementation, function behavior, memory management and final code must be understood, verified and explainable by the author.

## Learning Outcomes

Through this project, the following skills are developed:

- Understanding C programming fundamentals.
- Working with pointers and memory addresses.
- Managing dynamically allocated memory.
- Manipulating strings and memory blocks.
- Understanding and using function pointers.
- Implementing and manipulating singly linked lists.
- Creating and using static libraries.
- Organizing C projects and following the 42 Norm.

## Conclusion

Libft provides a fundamental foundation for future projects in the 42 curriculum. By recreating standard C functions and implementing additional utilities, this project strengthens essential programming skills and develops a deeper understanding of memory management, pointers, data structures and code organization.

The resulting library serves as a personal collection of reusable C functions that can be extended and integrated into future projects.