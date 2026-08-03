#include "main.h"
/**
 * print_oct - prints an unsigned int as an octal
 * @num: integer to print as octal
 *
 * Return: length of the octal printed
 */
int print_oct(unsigned int num)
{
	char *str;
	unsigned int temp_num;
	int len;
	int pos;

	temp_num = num;
	len = 0;
	while (temp_num > 0)
	{
		temp_num /= 8;
		len++;
	}
	str = malloc(len * sizeof(char));
	pos = len - 1;
	while (num > 0)
	{
		str[pos] = (num % 8) + '0';
		num /= 8;
		pos--;
	}
	write(1, str, sizeof(char) * len);
	free(str);
	return (len);
}
