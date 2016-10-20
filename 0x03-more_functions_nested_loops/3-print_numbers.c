#include "holberton.h"
/**
 *print_numbers - a function that prints numbers from 0 to 9
 *followed by a new line
 *
 *Return: The returned value will be 0.
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
