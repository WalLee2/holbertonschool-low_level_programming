#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Figure out what numbers are prime
 *
 * @n: Input number to determine if it is prime or not
 *
 * Return: 1 if prime 0 if not prime
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n <= 1)
	{
		return (0);
	}
	return (_find_prime(n, 3));
}

/**
 * _find_prime - recursive function to find if a number is prime
 *
 * @n: The number to determine if it is prime or not
 *
 * @a: Number to divide into n
 *
 * Return: 0 if not prime, 1 if is prime
 */
int _find_prime(int n, int a)
{
	if (a >= n)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (_find_prime(n, (a + 2)));
}
