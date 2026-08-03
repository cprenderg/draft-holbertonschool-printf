#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
void print_int(int num);
void print_str(char *str);
void print_unsigned_int(unsigned int num);
void print_uhex(unsigned int num);
void print_hex(unsigned int num);
void print_oct(unsigned int num);
void print_char(int num);
#endif
