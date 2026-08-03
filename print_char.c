#include "main.h"
/**
 * print_char - prints a char using write
 * @num: integer to print as a char
 *
 * Return: 1
 */
int print_char(int num)
{
	write(1, &num, 1);
	return (1);
}	
