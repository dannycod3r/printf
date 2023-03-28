#include "main.h"
/**
 * print_x - prints the hexadecimal representation of a decimal number
 * @args: argument
 * Return: number of characters printed
 */
int print_x(va_list args)
{
	int i = 0, j = 0;
	int arr[sizeof(int) * 2 + 1];
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789abcdef";

	if (num == 0)
	{
		_putchar('0');
		j++;
		return (j);
	}

	while (num > 0)
	{
		arr[i] = num % 16;
		num /= 16;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(hex_digits[arr[i]]);
		j++;
	}

	return (j);
}

/**
 * print_X - prints the hexadecimal representation of a decimal number
 * @args: argument
 * Return: number of characters printed
 */
int print_X(va_list args)
{
	int i = 0, j = 0;
	int arr[sizeof(int) * 2 + 1];
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789ABCDEF";

	if (num == 0)
	{
		_putchar('0');
		j++;
		return (j);
	}

	while (num > 0)
	{
		arr[i] = num % 16;
		num /= 16;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(hex_digits[arr[i]]);
		j++;
	}

	return (j);
}
