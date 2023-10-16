#include "main.h"

/**
 * _printf - printf function
 * @format: format
 *
 * Return: number of cahrs printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0, printed_chars = 0;

	va_list list;
	char new_buffer[BUFF_SIZE];
	int new_buff_ind = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
		print_buffer(new_buffer, &new_buff_ind);
		va_end(list);
		return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @new_buffer: Array of chars
 * @new_buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char *new_buffer, int *new_buff_ind)
{
	if (*new_buff_ind > 0)
		write(1, &new_buffer[0], *new_buff_ind);
	*new_buff_ind = 0;
}
