#include "main.h"

/**
 * print_c - function to print character
 * @args: characters to print
 * Return: number of character or -1 if failed
 */

int print_c(va_list args)
{
	char ch = va_arg(args, int);

	return (_putchar(ch));
}

/**
 *print_s - function to print string
 *@args: string to print
 *
 *Return: number of characters to print
 */

int print_s(va_list args)
{
	int count;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	return (count);
}

/**
 * print_percent - function to print %
 * @args: unused
 * Return: always 1
 */
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');

	return (1);
}
