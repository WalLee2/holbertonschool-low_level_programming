#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - given an integer input, print all numbers until 98
 *
 *@n: integer input
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%i\n", n);
}
