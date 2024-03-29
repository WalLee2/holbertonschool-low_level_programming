#include "main.h"

/**
 * _puts_recursion - Print a string to std out using recursion
 *
 * @s: string to print out
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
