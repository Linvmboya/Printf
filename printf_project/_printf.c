#include "main.h"

/**
 * print_format - prints characters according to the specific format
 * @specifier: the format of the character
 * @list: the list of arguments
 * Return: number of arguments printed
 */
int print_format(char specifier, va_list list)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(list, int));
	else if (specifier == 's')
		count += print_string(va_arg(list, char *));
	else if (specifier == '%')
		count += print_char(va_arg(list, int));
	else
		count += write(1, &specifier, 1);
	return (count);
}
/**
 * _printf - Function that produces output according to a format
 * @format: is a character string
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), list);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(list);
	return (count);
}
