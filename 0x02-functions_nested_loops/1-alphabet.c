#include "holberton.h"

/**
 *main - printing out the alphabet
 *Return: Always 0.
 */

void print_alphabet(void)

{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
