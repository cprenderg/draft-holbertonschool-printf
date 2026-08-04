#include "main.h"
/**
 * print_bin - prints an unsigned int as a binary
 * @num: integer to print as binary
 *
 * Return: length of the binary printed
 */
int print_bin(unsigned int num)
{
	char *str;
	unsigned int temp_num;
	int len;
	int pos;

	/* num = 0 edge case */
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	temp_num = num;
	len = 0;
	/* Getting length of the binary string */
	while (temp_num > 0)
	{
		temp_num /= 2;
		len++;
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (-1);
	}
	pos = len - 1;
	/* Converting num to binary string */
	while (num > 0)
	{
		str[pos] = (num % 2) + '0';
		num /= 2;
		pos--;
	}
	write(1, str, sizeof(char) * len);
	free(str);
	return (len);
}
