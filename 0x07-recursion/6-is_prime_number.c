#include "holberton.h"
/**
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (helper_f(n, 2));
	}
	else if (n < 0)
	{
		return (0);
	}
	return (0);
}
int helper_f(int n, int i)
{
	if (n % i == 0 && i != (n / 2))
	{
		return (0);
	}
	else if (i >= (n / 2))
	{
		return (1);
	}
	else
	{
		return (helper_f(n, i + 1));
	}
}
