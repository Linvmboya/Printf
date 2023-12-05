#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
/*FLAGS*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
/*LEN*/
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format
 * @fn: The function associated
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 * @fmt: the format
 * @fm_t: function associated
 */
typedef struct fmt fm_t;
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *m, va_list list,
		char buffer[], int flags, int width, int precision,
		int len);

/*functions for specifiers*/
int get_flags(const char *format, int *m);
int get_width(const char *format, int *m, va_list list);
int get_precision(const char *format int *m, va_list list);
int get_len(const char *format, int *m);

/*functions for printing characters and strings*/
int print_char(va_list types, char buffer[], int flags,
		int width, int precision, int len);
int print_string(va_list types, char buffer[], int flags, int width,
		int precision, int len);
int print_percent(va_list types, char buffer[], int flags,
		int width, int precision, int len);

/*functions that print non printable characters*/
print_non_printable(va_list types, char buffer[], int flags,
		int width, int precision, int len);

/*functions used to print numbers*/
int print_int(va_list types, char buffer[], int flags, int width,
		int precision, int len);
int print_binary(va_list types, char buffer[], int flags,
		int width, int precision, int len);
int print_unsigned(va_list types, char buffer[], int flags,
		int width, int precition, int len);
int print_octal(va_list types, char buffer[], int flags,
		int width, int precision, int len);
print_hexadecimal(va_list types, char buffer[], int flags,
		int width, int precision, int len);
int print_hexa_upper(va_list types, char buffer[], int flags,
		int width, int precision, int len);
int print_hexa(va_list types, char map_to[], char buffer[],
		int flags, char flag_ch, int width,
		int precision, int len);

/*printing memory address*/
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int len);


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

/*for printing string in reverse*/
int print_reverse(va_list types, char buffer[],
		int width, int precision, int len);

/*print a string in rot 13*/
int print_rot13string(va_list types, char buffer[], int flags,
		int width, int precision, int len);
/*UTILS*/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int len);
convert_size_unsgnd(unsigned long int num, int len);


#endif
