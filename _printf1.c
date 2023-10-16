#include "main.h"

/**
 * _printf - printf function
 * @format: format
 * Return: number of cahrs printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0, printed_chars = 0;
	va_list list;

	if (format == NULL)
		return(-1);
	va_start(list, format);

	for(i = 0, format[i] != '\0', i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg(list, int);
				_putchar(c);
				count++;
			}
			if (format[i + 1] == 's')
			{
				char* str = va_arg(list, char*);
				for(i = 0, str[i] != '\0', i++)
				{
					_putchar(str[i]);
				}
			}
			if (format[i + 1] == '%')
			{
				_putchar("%%");
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(list);
	return (printed_chars);
}
