#include "holberton.h"
/**
 *puts_half - printing out half of the string.
 *@str: Variable that holds the string.
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > 4 && i < 10)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
