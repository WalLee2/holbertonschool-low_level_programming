#include "holberton.h"
/**
 *
 *
 *
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
