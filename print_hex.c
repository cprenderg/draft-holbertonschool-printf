#include "main.h"
/**
 * print_hex - prints an unsigned int in lowercase hexadecimal
 * @num: unsigned int to convert
 *
 * Return: length of the string printed
 */
int print_hex(unsigned int num)
{
	char *str;
	unsigned int temp_num;
	int len;
	int pos;
	

	temp_num = num;
	len = 0;
	/* Getting length of the hexadecimal string */
	while (temp_num > 0)
	{
		temp_num /= 16;
		len++;
	}
	str = malloc(len * sizeof(char));
	if (str == NULL)
		{
			return (-1);
		}
	pos = len - 1;
	/* Converting num to hexadecimal string */
	while (num > 0)
	{
		temp_num = num % 16;
		switch (temp_num)
		{
			case 10:
				str[pos] = 'a';
				break;
			case 11:
				str[pos] = 'b';
				break;
			case 12:
				str[pos] = 'c';
				break;
			case 13:
				str[pos] = 'd';
				break;
			case 14:
				str[pos] = 'e';
				break;
			case 15:
				str[pos] = 'f';
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
