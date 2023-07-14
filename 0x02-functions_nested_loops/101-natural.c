#include "main.h"
#include <stdio.h>

/**
 * main - Add up all the multiples of 3 and 5 between 0 and input n
 *
 * Return: Always returns 0
 */

int main(void)
{
	int total = 0, i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
		}
		i++;
	}
	printf("%i\n", total);
	return (0);
}
