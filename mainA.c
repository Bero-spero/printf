#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len1;
len= _printf("hello world\n");
len1= printf("hello world\n");
printf("got: %d, expected: %d\n",len , len1);

len= _printf("Character:[%c]\n", 'H');
len1= printf("Character:[%c]\n", 'H');
printf("got: %d, expected: %d\n",len , len1);

len= _printf("String:[%s]\n", "I am a string !");
len1 = printf("String:[%s]\n", "I am a string !");
printf("got: %d, expected: %d\n",len , len1);

len=  _printf("Percent:[%%]\n");
len1= printf("Percent:[%%]\n");
printf("got: %d, expected: %d\n",len , len1);

return (0);
}
