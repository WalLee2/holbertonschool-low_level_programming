#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_to_uint - a function that converts a binary number to an unsigned int
 *@b: a pointer that points to the string of numbers being passed
 *Return: 0 if NULL is passed or if the first character is not a 0 or 1
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
