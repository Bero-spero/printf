#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define BUFF_SIZE (1024)

void _putchar(char c);
int _printf(const char *format, ...);
void print_buffer(char *new_buffer, int *new_buff_ind);

#endif
