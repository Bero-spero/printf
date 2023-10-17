#include "main.h"

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
			if (format[i] == '\0')
				return (printed_chars);
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
