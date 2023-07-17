#include "main.h"
#include <stdio.h>

/**
 * print_number - Given an integer, print the integer using putchar only
 *
 * @n: input integer to print
 */

void print_number(int n)
{

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
