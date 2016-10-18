#include "holberton.h"
/**
 *main - printing the alphabet, a-z, 10 times.
 *Description: Alphabet.
 *Return: There is no return value.
 */

void print_alphabet_x10(void)

{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
