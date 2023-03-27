#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * @...: arbitrary number of arguments
 * Return: the number characters printed exluding '\0'
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;
	int (*func)(va_list);

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (!(format[i]))
				return (-1);
			func = get_func(format[i]);
			if (func == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count++;
			}
			else
			{
				count += func(args);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
