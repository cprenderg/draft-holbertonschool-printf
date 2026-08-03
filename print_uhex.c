#include "main.h"
/**
 * print_uhex - prints an unsigned int in uppercase hexadecimal
 * @num: unsigned int to convert
 *
 * Return: length of the hexadecimal printed
 */
int print_uhex(unsigned int num)
{
	char *str;
	unsigned int temp_num;
	int len;
	int pos;
	

	temp_num = num;
	len = 0;
	while (temp_num > 0)
	{
		temp_num /= 16;
		len++;
	}
	str = malloc(len * sizeof(char));
	pos = len - 1;
	while (num > 0)
	{
		temp_num = num % 16;
		switch (temp_num)
		{
			case 10:
				str[pos] = 'A';
				break;
			case 11:
				str[pos] = 'B';
				break;
			case 12:
				str[pos] = 'C';
				break;
			case 13:
				str[pos] = 'D';
				break;
			case 14:
				str[pos] = 'E';
				break;
			case 15:
				str[pos] = 'F';
				break;
			default:
				str[pos] = temp_num + '0';
				break;
		}
		num /= 16;
		pos--;
	}
	write(1, str, sizeof(char) * len);
	free(str);
	return (len);
}
