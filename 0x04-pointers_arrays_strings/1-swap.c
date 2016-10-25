#include <stdio.h>
#include "holberton.h"
/**
 *swap_int - A function that swaps the values of two integers.
 *@a: Holds the value of one integer.
 *@b: Holds the value of the second integer.
 *Return: The value 0 is returned.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *b;
	*b = *a;
	*a = s;
}
