#include "main.h"
#include <stdio.h>

void print_number(int n)
{

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	print_number(n / 10);
	_putchar(n % 10 + '0');
}
