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
	int format_pos;
	int chars_printed;
	
	chars_printed = 0;
	format_pos = 0;
	va_start(ap, format);
	while (format[format_pos])
	{
		/* Get the length of the current segment */
		while (format[format_pos] != '%' && format[format_pos])
		{
			chars_printed += print_char(format[format_pos]);
			format_pos++;
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
					/* % is only character in string */
					if (format_pos == 0)
					{
						return (-1);
					}
					/* % at the end of the string */
					format_pos++;
					continue;
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
