#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h> /*va_list, va_start, va_end*/
#include <stddef.h> /*NULL*/

/* function that produces output according to a format */
int _printf(const char *format, ...);


/**
 *struct format - structure for printing various types
 *@spc: format specifier
 *@f: function to print
 */
typedef struct format
{
	const char spc;
	int (*f)(va_list);
} format_t;

/* function that prints character */
int _putchar(char c);

/* helpers */
int (*get_func(const char a))(va_list);
int print_c(va_list parameters);
int print_s(va_list parameters);
int print_percent(__attribute__((unused))va_list parameters);

#endif
