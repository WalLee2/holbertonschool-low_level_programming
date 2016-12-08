#include "holberton.h"
/**
 *flip_bits - A function that flips bits until the number n is equal to m
 *@n: a variable that holds a value
 *@m: a variable that holds the end result value
 *Return: The number of times needed to flip the bits in order to change n
 *to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int change, i;

	change = i = 0;
	while (i < 64)
	{
		if ((n & 1) != (m & 1))
			change++;
		i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (change);
}
