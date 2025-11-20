# ft_printf - November 2025

A custom implementation of printf-style formatted output for learning and project use.

## Author

- [@0xS4cha](https://www.github.com/0xS4cha)

## Description

Minimal reimplementation of the C standard printf family to support common conversion specifiers and flags used in 42 projects. Provides formatted output to stdout with dynamic handling of integers, strings, pointers, and hexadecimal output. Designed for education and small projects.

## Main function

- `int ft_printf(const char *format, ...)` — Writes formatted output to stdout. Returns the number of characters printed.

## Supported specifiers / utilities

- Conversion specifiers typically implemented: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`.  
- Flag, width and precision handling as required by the project specification.  
- Internal helpers: integer to string converters, padding/width handlers, hex formatter, pointer printer, and output counters.

## Compilation

Example (gcc):

```bash
gcc -Wall -Wextra -Werror -o test_printf *.c
```

Or use the provided Makefile if present.

## Usage

Typical usage example:

```c
#include "ft_printf.h"

int main(void)
{
    int len = ft_printf("Hello %s, number: %d, hex: %#x\n", "world", 42, 42);
    ft_printf("Printed %d characters\n", len);
    return 0;
}
```

## Tests

Rebuild cleanly:

```bash
make fclean && make
```

Add your own test cases comparing output/return value to the standard printf if needed.

## Disclaimer

⚠️ IMPORTANT — Educational use only:
- Do not copy this code for assessed work in 42 or other courses.
- Use this repository for study and reference only.

## Feedback

If you have feedback, open an issue or contact the author.