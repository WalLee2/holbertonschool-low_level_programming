#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - From arguments, print all the numbers
 * @separator: The string to print between the numbers
 * @n: The number of integer arguments to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list  args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
