#include <unistd.h>
/**
 * _putchar - function to return character to stdout
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
