#include "main.h"

/**
 * _printf - printf function
 * @format: format
 *
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	int i, count = 0, printed_chars = 0;
	
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format)
		
	for (i = 0; format && format[i] != '\0'; i++)
	{


}
