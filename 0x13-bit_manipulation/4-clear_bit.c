#include "holberton.h"
/**
 *clear_bit - A function that sets the value of a bit to a 0 at
 *a given index
 *@n: a pointer pointing to the variable that is passed in the main function
 *@index: the given index of a number that is changed
 *Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
