#include "main.h"
/**
 * print_p - prints pointers
 * @args: argument
 * Return: number of characters printed
 */
int print_p(va_list args)
{
	unsigned long int n = (unsigned long int)va_arg(args, void *);
	int count = 0;
	int i, j;
	char hex[16] = "0123456789abcdef";
	char buffer[20] = {'0', 'x', '0', '\0'};

	if (n == 0)
	{
		_putchar('0');
		_putchar('x');
		_putchar('0');
		count += 3;
		return (count);
	}

	for (i = 0; n != 0; i++)
	{
		buffer[i] = hex[n % 16];
		n = n / 16;
	}
	buffer[i] = '\0';

	for (i = i - 1, j = 2; i >= 0; i--, j++)
	{
		buffer[j] = buffer[i];
	}

	buffer[j] = '\0';

	for (i = 0; buffer[i]; i++)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
