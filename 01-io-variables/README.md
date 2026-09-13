# io_variables

Beginner C exercises for learning basic I/O (`printf`/`scanf`) and variables.

## Exercises

### `ex01_hello.c`
First program — printing a simple message with `printf`.

### `ex02_variables.c`
Reading book details (title, number of pages, price, genre initial) from the user and printing a summary.

Concepts practiced:
- Data types: `char`, `int`, `float`, and character arrays (`char[]`) for strings
- Reading input with `scanf` and the difference between `%c` / `%d` / `%f` / `%s`
- Printing output with `printf` and formatting decimals (`%.2f`)
- Key gotcha: the need for a space before `%c` (`" %c"`) to skip the leftover newline character in the input buffer

### `ex03_alphabet_number.c`
Reading a lowercase letter from the user and printing its position in the alphabet (e.g. `a` → `1`, `b` → `2`).

Concepts practiced:
- Character arithmetic: characters are stored as integer (ASCII) codes, so subtracting `'a'` from a letter gives its zero-based position in the alphabet
- Casting between `char` and `int` with `(int)`
- (Optional extension) using `tolower()` from `<ctype.h>` to support both uppercase and lowercase input

## Run

```bash
gcc ex01_hello.c -o hello && ./hello
gcc ex02_variables.c -o variables && ./variables
gcc ex03_alphabet_number.c -o alphabet_number && ./alphabet_number
```