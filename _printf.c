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
        char new_buffer;
	int new_buff_ind = 0;

        if (format == NULL)
                return (-1);

	va_start(list, format)
		
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			new_buffer[new_buff_ind++] = format[i];
			if (new_buff_ind == BUFF_SIZE)
				print_puffer(new_buffer, &new_buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(new_buffer, &new_buff_ind);
	int new_flags, new_width, new_precision, new_size;
			new_flags = get_new_flags(new_format, &i);
			new_width = get_new_width(new_format, &i, new_list);
			new_precision = get_new_precision(new_format, &i, new_list);
			new_size = get_new_size(new_format, &i);
			++i;
			count = handle_new_print(format, &i, list, new_buffer, new_flags, new_width, new_precision, new_size);
			if (count == -1)
				return (-1);
			printed_chars += count;
		}
	}
	print_buffer(new_buffer, &new_buff_ind);
	va_end(list);
	return (printed_chars);
}
void print_buffer(char new_buffer[], int *new_buff_ind);
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @new_buffer: Array of chars
 * @new_buff_ind: Index at which to add next char, represents the length.
 */
{
	if (*new_buff_ind > 0)
		write(1, &new_buffer[0], *new_buff_ind);
	*new_buff_ind = 0;
}
