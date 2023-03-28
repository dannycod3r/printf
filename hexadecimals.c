#include "main.h"
/**
 * print_x - prints the hexadecimal representation of a decimal number
 * @args: argument
 * Return: number of characters printed
 */
int print_x(va_list args, flags_t *f)
{
	int i = 0, j = 0;
	int arr[sizeof(int) * 2 + 1];
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789abcdef";
	
	(void)f;
	
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
int print_X(va_list args, flags_t *f)
{
	int i = 0, j = 0;
	int arr[sizeof(int) * 2 + 1];
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789ABCDEF";
	
	(void)f;

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
 * print_x_helper - prints the hexadecimal representation of a decimal number
 * @num: number
 * Return: number of characters printed
 */
char *print_x_helper(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
