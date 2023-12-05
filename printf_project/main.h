#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int print_char(int c);
int print_string(char *str);
int print_format(char specifier, va_list list

#endif
