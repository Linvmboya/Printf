#include "main.h"

/**
 * print_char - function that prints character
 * @c: character to be printed
 * Return: printed character
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string of characters
 * @str: the string to be printed
 * Return: a string of printed characters
 */
int print_string(char *str)
{
	int x = 0, count = 0;

	while (str[x] != '\0')
	{
		count += print_char(str[x++]);
	}
	return (count);
}

