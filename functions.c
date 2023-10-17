#include"main.h"
/**
 *pint - function that prints n.
 *@n: intiger.
 *Return: 0
 */
char *pint(int n)
{
	static char buff[BUFF_SIZE];

	sprintf(buff, "%d", n);
	return (buff);
}

/**
 * print_number - printing numbers
 * @num: number .
 * @printed_chars: printed chars.
 */
void print_number(int num, int *printed_chars)
{
	char *buff = pint(num);
	int i = 0;
	
	while (buff[i] != '\0')
	{
		_putchar(buff[i++]);
		*printed_chars += 1;
	}
	memset(buff, 0, BUFF_SIZE);
}

/**
 * handle_spc2 - handling specifier charctar
 * @list:the location of charcter
 * @printed_chars:Return value
 * @format:format.
 */
void handle_spc2(char format, va_list list, int *printed_chars)
{
	int num, i = 0;
	char *str;

	if (format == 'd' || format == 'i')
	{
		num = va_arg(list, int);
		print_number(num, printed_chars);
	}
	else if (format == 'r')
	{
		str = va_arg(list, char*);
		if (str == NULL)
			str = "(llun)";
		while (str[i] != ('\0'))
			i++;
		i--;
		while (i >= 0)
		{
			_putchar(str[i--]);
			*printed_chars += 1;
		}
	}

}

/**
 *handle_spc - handling specifier charctar
 *@list:the location of charcter
 *@printed_chars:Return value
 *@format:format.
 *Return:written charctars
 */
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
	else
		handle_spc2(format, list, printed_chars);
}
