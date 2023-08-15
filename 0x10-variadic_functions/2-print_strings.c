#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Print all the strings given as input
 * @separator: Separator to print between the strings
 * @n: Number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char*);
		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
