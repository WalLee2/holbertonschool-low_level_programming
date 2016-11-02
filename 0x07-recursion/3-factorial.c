#include "holberton.h"
/**
 *factorial - returns the factorial of a given number
 *@n: the variable that holds the number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
