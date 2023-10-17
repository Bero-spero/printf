#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define BUFF_SIZE (1024)

void _putchar(char c);
int _printf(const char *format, ...);
void handle_spc(char format, va_list list, int *printed_chars);
char *pint(int n);
void print_number(int num, int *printed_chars);
void handle_spc2(char format, va_list list, int *printed_chars);
#endif
