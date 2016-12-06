#include "holberton.h"
#include <stdio.h>
/**
 *get_bit - a function that uses the index
 *variable to return the value of a bit
 *@n: The decimal value passed
 *@index: The particular bit being observed
 *Return: the value of the bit at index or -1 if there was an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (index > 63)
		return (-1);
	if (n > 0)
	{
		n = n % 2;
		return (n);
	}
	else
		return (-1);
}
