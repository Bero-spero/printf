#include "main.h"

/**
 * _printf - printf function.
 * @format: format.
 * Return: number of cahrs printed.
 */
int _printf(const char *format, ...)
{
	int i, h, printed_chars = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				char c = va_arg(list, int);

				_putchar(c);
				printed_chars++;
			}
			if (format[i] == 's')
			{
				char *str = va_arg(list, char*);

				for (h = 0; str[h] != '\0'; h++)
				{
					_putchar(str[h]);
					printed_chars++;
				}
			}
			if (format[i] == '%')
			{
				_putchar('%');
				printed_chars++;
			}
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	va_end(list);
	return (printed_chars);
}
