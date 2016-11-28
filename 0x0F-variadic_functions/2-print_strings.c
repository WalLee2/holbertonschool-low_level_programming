#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings - A function that prints a string
 *@separator: the string to be printed between the strings
 *@n: The number of strings passed to the function
 *Return: The newly adjusted string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list main_string;
	unsigned int i;
	char *names;

	va_start(main_string, n);
	for (i = 0; i < n; i++)
	{
		if (main_string == NULL)
			printf("(nil)\n");
		names = va_arg(main_string, char *);
		printf("%s", names);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
