#include "main.h"
/**
 * print_str - prints a string using write
 * @str: string to print
 *
 * Return: void
 */
void print_str(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	write(1, str, sizeof(char) * len);
}
