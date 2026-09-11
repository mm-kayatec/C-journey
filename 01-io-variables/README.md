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

## Run

\`\`\`bash
gcc ex01_hello.c -o hello && ./hello
gcc ex02_variables.c -o variables && ./variables
\`\`\`
