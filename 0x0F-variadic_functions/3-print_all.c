#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void print_string(va_list param, char *separator)
{
	char *str;
	str = va_arg(param, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}
void print_int(va_list param, char *separator)
{
	printf("%s%d", separator, va_arg(param, int));
}
void print_float(va_list param, char *separator)
{
	printf("%s%f", separator, va_arg(param, double));
}
void print_char(va_list param, char *separator)
{
	printf("%s%c", separator, va_arg(param, int));
}

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
