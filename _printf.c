#include "main.h"

void handle_spc(char format, va_list list, int *printed_chars)
{
        char c, *str;
        int h;

	if (format == 'c')
	{
		c = (char)va_arg(list, int);
		_putchar(c);
		*printed_chars += 1;
	}
	else if (format == 's')
	{
	        str = va_arg(list, char*);
                if (str == NULL)
                        str = "(null)";
		for (h = 0; str[h] != '\0'; h++)
		{
			_putchar(str[h]);
			*printed_chars += 1;
		}
	}
	else if (format == '%')
	{
		_putchar('%');
		*printed_chars += 1;
	}
}

/**
 * _printf - printf function.
 * @format: format.
 * Return: number of cahrs printed.
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
                        handle_spc(format[i], list, &printed_chars);
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
