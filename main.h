#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h> /*va_list, va_start, va_end*/
#include <stddef.h> /*NULL*/
#include <unistd.h> /* write */

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
int print_c(va_list argss);
int print_s(va_list args);
int print_percent(__attribute__((unused))va_list args);
int print_i(va_list args);
int print_d(va_list args);
int print_b(va_list args);
int print_u(va_list args);
int print_o(va_list args);

#endif
