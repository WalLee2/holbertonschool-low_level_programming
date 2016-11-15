#include "holberton.h"
/**
 *power - getting the power of the integer.
 *@i: the variable i will be decrementing
 *Return - an integer of t will be returned.
 */
int power(int i)
{
	int t;

	t = 10;
	while (i > 1)
	{
		t *= 10;
		i--;
	}
	return (t);

}

/**
 *print_number - printing out an integer.
 *@n: The variable n is being evaluated.
 *Return: the value of 0 will be returned.
 */
void print_number(int n)
{
	long c, s;

	c = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	while (n / power(c) >= 10)
	{
		c++;
	}
	s = n / power(c);
	_putchar(s + '0');
	while (c > 1)
	{
		s = n % power(c--);
		s = s / power(c);
		_putchar(s + '0');
	}
	s = n % 10;
	if (n != 0)
	{
		_putchar(s + '0');
	}
}
