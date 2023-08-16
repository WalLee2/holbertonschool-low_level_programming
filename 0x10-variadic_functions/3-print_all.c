#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Helper function to print a character from variadic function
 * @ap: Argument pointer to find the next argument from macro va_arg
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Helper function to print an int from variadic function
 * @ap: Argument pointer to find the next argument from macro va_arg
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - Helper function to print a float from variadic function
 * @ap: Argument pointer to find the next argument from macro va_arg
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_str - Helper function to print a string from variadic function
 * @ap: Argument pointer to find the next argument from macro va_arg
 */
void print_str(va_list ap)
{
	char *tmp = va_arg(ap, char *);

	tmp = (tmp ? tmp : "(nil)");
	printf("%s", tmp);
}
/**
 * print_all - Print all arguments to the function
 * @format: List of types of arguments
 */
void print_all(const char * const format, ...)
{
	arg_t args[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	int j = 0;
	va_list ap;
	const char *key;

	va_start(ap, format);
	key = format;
	while (key && *key != '\0')
	{
		j = 0;
		while (args[j].in)
		{
			if (args[j].in && (*key == *args[j].in))
			{
				args[j].f(ap);
				if (*(key + 1) != '\0')
					printf(", ");
			}
			j++;
		}
		key++;
	}
	va_end(ap);
	printf("\n");
}
