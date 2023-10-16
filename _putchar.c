#include <unistd.h>
/**
 * _putchar - function to return character to stdout
 *  * @c: The character to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
