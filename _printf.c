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
        char buffer;

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
			write(1, &format[i], 1);
			printed_chars++;
		}
} 
