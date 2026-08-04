# Integration Project: printf
Directory for Integration Project: printf at Holberton completed with Felix.
## Header file 
[main.h](./main.h)

## Project File Table 
The following files are included in this project:

| File      | Description |
|---------- |-------------|
|    [_printf.c](./printf.c)       |      Prints anything and returns characters printed. Accepts b, c, d, i, o, s, u, x, and X as format specifiers.       |
|     [print_bin.c](./print_bin.c)      |       Prints a positive integer in binary and returns characters printed.      |
|     [print_char.c](./print_char.c)      |      Prints a single character and returns 1.       |
|     [print_hex.c](./print_hex.c)      |      Prints a positive integer in lowercase hexidecimal and returns characters printed.       |
|     [print_int.c](./print_int.c)      |      Prints an integer and returns characters printed.       |
|     [print_oct.c](./print_oct.c)      |      Prints a positive integer in octal format and returns characters printed.       |
|     [print_str.c](./print_str.c)      |      Prints a string returns characters printed.       |
|     [print_uhex.c](./print_uhex.c)      |      Prints an integer in uppercase hexidecimal and returns characters printed.          |
|     [print_unsigned_int.c](./print_unsigned_int.c)      |      Prints a positive integer and returns characters printed.       |

## Known limitations
* An uncoupled % at end of string should print nothing and return -1. This version will print everything before the uncoupled % and also return -1
* Putting format specifiers that are not b, c, X, x, i, d, o, s, or u, will print the specifier instead.
* When converting an integer to a string in different functions the pointer used is not terminated by a null byte
* Not betty compliant