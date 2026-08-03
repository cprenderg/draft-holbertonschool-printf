#include "main.h"
/**
 * print_int - prints an integer using write
 * @num: integer to print
 *
 * Return: length of the integer printed
 */
int print_int(int num)
{
	char *str;
	int is_neg;
	int temp_num;
	int len;
	int pos;

	is_neg = 0;
	len = 0;
	/* checking if num is negative */
	if (num < 0)
	{
		is_neg = 1;
		num *= -1;
	}
	/* calculating length of num for space allocation */
	temp_num = num;
	while (temp_num > 0)
	{
		len++;
		temp_num /= 10;
	}
	/* Adding an extra byte for the '-' if negative */
	if (is_neg)
	{
		len++;

	}
	str = malloc(len * sizeof(char));
	pos = len - 1;
	/* Converting integer to string */
	while (num > 0)
	{
		str[pos] = (num % 10) + '0';
		num /= 10;
		pos--;
	}
	if (is_neg)
	{
		str[0] = '-';
	}
	write(1, str, sizeof(char) * len);
	free(str);
	return (len);
}
