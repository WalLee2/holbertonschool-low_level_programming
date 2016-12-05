#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total, power;

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0' && b[i] != '1') || b == NULL)
			return (0);
	}
	power = 1;
	total = 0;
	for (i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			total += power;
		else if (b[i] == '0')
			total = total + 0;
	}
	return (total);
}
