#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers - a function that prints numbers followed by a new line
 *@separator: the string to be preinted between numbers
 *@n: the number of integers passed to the function
 *Return: The numbers with a comma and a space between them
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list string;

	num = 0;
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(string, int);
		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
