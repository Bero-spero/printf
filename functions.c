#include<stdio.h>
#include<stdarg.h>

void handle_int(int value) 
{
	 printf("Integer value: %d\n", value);
}

void printf(const char* format, ...) 
{
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++) 
	{
		if (format[i] == '%') 
		{
		i++;
		switch (format[i]) 
		{
			case 'd':
			case 'i':
		handle_int(va_arg(args, int));
			break;
			default:
		printf("Invalid format specifier\n");
			break;
		}
		}	
		else 
		{
			printf("%c", format[i]);
		}
	}
	va_end(args);
}

int main() 
{
	my_printf("Number: %d\n", 10);
	return 0;
}
