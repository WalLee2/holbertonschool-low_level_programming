#include "main.h"
/**
 * print_number - print the characters of a number to stdout
 *
 * @n: integer value to be converted into a character and printed
 */

void print_number(int n)
{
	if (n < 10)
	{
		_putchar('0');
	}
	else
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
/**
 * jack_bauer - print the hour and minutes within a 24 hour period
 *
 */
void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		m = 0;
		while (m <= 59)
		{
			print_number(h);
			_putchar(':');
			print_number(m);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
