#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_string - prints a string
 *@param: list of parameters
 *@separator: passing in a separator
 */
void print_string(va_list param, char *separator)
{
	char *str;

	str = va_arg(param, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 *print_int - prints an int
 *@param: list of parameters
 *@separator: passing in a separator
 */
void print_int(va_list param, char *separator)
{
	printf("%s%d", separator, va_arg(param, int));
}
/**
 *print_float - prints a float
 *@param: list of paramters
 *@separator: passing in a separator
 */
void print_float(va_list param, char *separator)
{
	printf("%s%f", separator, va_arg(param, double));
}
/**
 *print_char -  prints a character
 *@param: list of parameters
 *@separator: passing in a separator
 */
void print_char(va_list param, char *separator)
{
	printf("%s%c", separator, va_arg(param, int));
}
/**
 *print_all - evalutates each parameter and
 *passes them to the appropriate function
 *@format: a string
 */
void print_all(const char * const format, ...)
{
	print_a_t print_a[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_list param;
	unsigned int i, j;
	char *separator;

	va_start(param, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*print_a[j].c == format[i])
			{
				print_a[j].f(param, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(param);
}
