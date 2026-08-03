#include "main.h"
/**
 * print_str - prints a string using write
 * @str: string to print
 *
 * Return: length of the string printed
 */
int print_str(char *str)
{
	int len;

	if (str == NULL)
	{
		str = "(null)";
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	write(1, str, sizeof(char) * len);
	return (len);
}
