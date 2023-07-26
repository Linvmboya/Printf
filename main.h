#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/*functions for specifiers*/
int get_flags(const char *format, int *m);
int get_width(const char *format, int *m, va_list list);
int get_precision(const char *format int *m, va_list list);
int get_len(const char *format, int *m);

/*handler for width*/
int handle_write_char(char c, char buffer[], int flags,
		int width, int precision, int len);
int write_number(int is positive, int buff, char buffer[],
		int flags, int width, int precision, int len);
int write_num(int buff, char bff[], int flags, int width,
		int precision, int length, char padd, char extra_c);
int write_pointers(char buffer[], int buff, int length, int width,
		int flags, char padd, char extra_c int padd_start);
int write_unsigned(int is_negative, int buff, char buffer[],
		int flags, int width, int precision, int len);

#endif
