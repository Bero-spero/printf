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
