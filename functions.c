#include <stdio.h>
#include <stdarg.h>

void my_printf(const char* format, ...) 
{
	va_list args;
	va_start(args, format);
	for (int i = 0; format[i] != '\0'; i++) 
	{
		if (format[i] == '%' && format[i+1] == 'd') 
		{
		int value = va_arg(args, int);
		printf("%d", value);
		i++;
		}
		else if (format[i] == '%' && format[i+1] == 'i') 
		{
		int value = va_arg(args, int);
		printf("%i", value);
		i++;
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(args);
}

