# Integration Project: printf
Directory for Integration Project: printf at Holberton.
## Known limitations
An uncoupled % at end of string should print nothing and return -1. This version will print everything before the uncoupled % and also return -1.
Putting format specifiers that are no c, X, x, i, d, o, s, or u will print the specifier instead.
The following functions are vulnerable to fake mallocs: print_hex.c, print_oct.c, print_uhex.c, print_unsigned_int.c.
