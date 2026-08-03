#include "main.h"
/**
 * _printf - prints anything
 * @format: identifies the type of data to be printed
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	
	va_list ap;
	char type;
	int i;
	int current_len;
	int format_pos;
	char *format_str;
	
	format_pos = 0;
	va_start(ap, format);
	while (format[format_pos])
	{
		current_len = 0;
		while (format[format_pos] != '%' && format[format_pos])
		{
			format_pos++;
			current_len++;
		}
		i = 0;
		format_str = malloc(current_len * sizeof(char));
		while (i < current_len)
		{
			format_str[i] = format[format_pos - current_len + i];
			i++;
		}
		write(1, format_str, sizeof(char) * current_len);
		free(format_str);
		
		if (format[format_pos] == '%' && format[format_pos + 1] == '%')
		{
			i = '%';
			write(1, &i, 1);
			format_pos++;
		}
		else if (format[format_pos] == '%')
		{
			type = format[format_pos + 1];
			current_len = 0;
			
			if (type == 's')
			{
				print_str(va_arg(ap, char *));
			}
			else if (type == 'c')
			{
				print_char(va_arg(ap, int));
			}
			else if (type == 'd' || type == 'i')
			{
				print_int(va_arg(ap, int));
			}
			else if (type == 'u')
			{
				print_unsigned_int(va_arg(ap, unsigned int));
			}
			else if (type == 'X')
			{
				print_uhex(va_arg(ap, unsigned int));
			}
			else if (type == 'x')
			{
				print_hex(va_arg(ap, unsigned int));
			}
			else if (type == 'o')
			{
				print_oct(va_arg(ap, unsigned int));
			}
			format_pos += 2;
		}
	}
	va_end(ap);
	return (format_pos);
}
