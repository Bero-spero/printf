#include "main.h"

/**
 * _printf - printf function
 * @format: format
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i++] == 'd')
		{
			int value = va_arg(args, int);

			_putchar('d');
			i++;
		}
		else if (format[i] == '%' && format[i++] == 'i')
		{
			int value = va_arg(args, int);

			_putchar('i');
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (0);
}
