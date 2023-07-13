#include "main.h"
#define ASCII_NUMBER 48

/**
 * print_last_digit - print the last digit of a number as a character
 *
 *@n: input integer to be evaluated
 *
 *Return: last digit of the number
 */

int print_last_digit(int n)
{
	int last = (n % 10);

	if (last < -1)
	{
		last *= -1;
	}
	_putchar(last + ASCII_NUMBER);
	return (last);
}
