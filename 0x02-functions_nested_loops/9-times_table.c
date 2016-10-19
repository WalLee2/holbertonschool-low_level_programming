#include "holberton.h"

/**
 *times_table - printing the 9 times table starting with 0
 *Description: Times table.
 *Return: The return value is void.
 */
void skeleton(int n);
void times_table(void)
{
	int i, k, l;
	l = 1;

	while ( l <= 9 )
	{
		i = 0;
		k = 1;
		_putchar('0');
		while ( i < 9 )
		{
			skeleton( l * k );
			i++;
		       	k++;
		}
		l++;
		_putchar('\n');
	}
}


void skeleton(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
