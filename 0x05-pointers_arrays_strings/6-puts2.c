#include "main.h"
/**
 * puts2 - print every other character in the string
 *
 * @str: string to be evaluated
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
