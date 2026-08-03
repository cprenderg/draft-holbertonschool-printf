#include "main.h"
/**
 * print_unsigned_int - prints an unsigned int using write
 * @int: unsigned int to print
 *
 * Return: length of the unsigned int printed
 */
int print_unsigned_int(unsigned int num)
{
	char *str;
	unsigned int temp_num;
	int len;
	int pos;

	len = 0;
	/* calculating length of num for space allocation */
	temp_num = num;
	while (temp_num > 0)
	{
		len++;
		temp_num /= 10;
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
	write(1, str, sizeof(char) * len);
	free(str);
	return (len);
}

