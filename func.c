#include "main.h"

/**
 * print_c - function to print character
 * @arg: characters to print
 * Return: number of character or -1 if failed
 */

int print_c(va_list arg)
{
	char ch = va_arg(arg, int);

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


/**
 * print_d - print a decimal
 * @args: decimal to print
 *
 * Return: number of characters and digits printed
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_i - prints an integer
 * @args: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
