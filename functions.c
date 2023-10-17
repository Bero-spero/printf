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
		printed_chars += 1;
	}
}

/**
 * handle_spc2 - handling specifier charctar
 * @list:the location of charcter
 * @printed_chars:Return value
 * @format:format.
 */
void handle_spc2(char format, va_list list, int *printed_chars)
{
	int num;

	if (format == 'd' || format == 'i')
	{
		num = va_arg(list, int);
		print_number(num, printed_chars);
	}
}
