#include "holberton.h"

/**
 *print_rev - Printing out a string in reverse.
 *@s: Variable that holds the string.
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for ( ; i != 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
