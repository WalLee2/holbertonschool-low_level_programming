#include "holberton.h"

/**
 *_puts - a function that prints out the string followed by a new line.
 *@str: a variable that contains the string.
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
