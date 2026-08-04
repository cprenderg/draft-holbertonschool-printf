#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int print_int(int num);
int print_str(char *str);
int print_unsigned_int(unsigned int num);
int print_uhex(unsigned int num);
int print_hex(unsigned int num);
int print_oct(unsigned int num);
int print_char(int num);
int print_bin(unsigned int num);
#endif
