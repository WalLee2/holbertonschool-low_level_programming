#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
/**
 * struct arg_type - to define a char pointer to type being passed to print_all
 * @in: char * to indicate what type of input is being passed
 * @f: function pointer to correct function used to print arguments passed
 */
typedef struct arg_type
{
	char *in;
	void (*f)(va_list ap);
} arg_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
