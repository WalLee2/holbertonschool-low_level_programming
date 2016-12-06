#include "holberton.h"
/**
 *set_bit - a function that sets the value of a bit to 1 at a given index
 *@n: a pointer that points to the value of n in the main function
 *@index: the index that we want to move to in n
 *Return: 1 if successful, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
