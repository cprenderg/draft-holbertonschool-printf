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
	int chars_printed;
	
	chars_printed = 0;
	format_pos = 0;
	va_start(ap, format);
	while (format[format_pos])
	{
		/* Get the length of the current segment */
		current_len = 0;
		while (format[format_pos] != '%' && format[format_pos])
		{
			format_pos++;
			current_len++;
		}
		/* Print the current segment if it exists */
		if (current_len > 0)
		{
			i = 0;
			format_str = malloc(current_len * sizeof(char));
			chars_printed += current_len;
			while (i < current_len)
			{
				format_str[i] = format[format_pos - current_len + i];
				i++;
			}
			write(1, format_str, sizeof(char) * current_len);
			free(format_str);
		}

		/* Printing correct format */
		if (format[format_pos] == '%')
		{
			type = format[format_pos + 1];
			
			switch (type)
			{
				case 's':
					chars_printed += print_str(va_arg(ap, char *));
					break;
				case 'c':
					chars_printed += print_char(va_arg(ap, int));
					break;
				case 'd':
				case 'i':
					chars_printed += print_int(va_arg(ap, int));
					break;
				case 'u':
					chars_printed += print_unsigned_int(va_arg(ap, unsigned int));
					break;
				case 'X':
					chars_printed += print_uhex(va_arg(ap, unsigned int));
					break;
				case 'x':
					chars_printed += print_hex(va_arg(ap, unsigned int));
					break;
				case 'o':
					chars_printed += print_oct(va_arg(ap, unsigned int));
					break;
				/* Edge cases */
				case '\0':
					break;
				default:
					/* Multiple % in a row */
					if (format[format_pos - 1] != '%')
					{
						chars_printed += print_char('%');
					}
					format_pos++;
					continue;
			}
			format_pos += 2;
		}
	}
	va_end(ap);
	return (chars_printed);
}
