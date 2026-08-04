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

	/* Edge case num is 0 */
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	temp_num = num;
	len = 0;
	/* Getting length of the octal string */
	while (temp_num > 0)
	{
		temp_num /= 8;
		len++;
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
		{
			return (-1);
		}
	pos = len - 1;
	/* Converting num to octal string */
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
