#include "holberton.h"
#include <stdio.h>
/**
 *get_bit - a function that uses the index variable to return the value of a bit
 *@n: The decimal value passed
 *@index: The particular bit being observed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (index == 0)
		return (0);
	if (n)
	{
		n = n % 2;
		return(n);
	}
	else
		return (-1);
}
