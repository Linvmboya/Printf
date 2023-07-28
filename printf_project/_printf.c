#include "main.h"

void print_buffer(char buffer[], int *buff);
/**
 * _printf - function that produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int m, printout = 0, charsp = 0;
	int flags, width, precision, len, buff = 0;

	va_list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (m = 0; format && format[m] != '\0'; m++)
	{
		if (format[m] != '%')
		{
			buffer[buff++] = format[m];
			if (buff == BUFF_SIZE)
				print_buffer(buffer, &buff);
			charsp++;
		}
		else
		{
			print_buffer(buffer, &buff);
			flags = get_flags(format, &m);
			width = get_width(format, &m, list);
			precision = get_precision(format, &m, list);
			len = get_len(format, &m);
			++m;
			printout = handle_print(format, &m, list, buffer,
					flags, width, precision, len);
		}
		if (printout == -1)
			return (-1);
		print_buffer(buffer, &buff);

		va_end(list);
	}
	return (charsp);
}
/**
 * print_buffer - function that prints contents of buffer
 * @buffer: array of characters
 * @buff: address where next character is added
 */
void print_buffer(char buffer[], int *buff)
{
	if (*buff > 0)
	{
		write(1, &buffer[0], *buff);
		*buff = 0;
	}
}
