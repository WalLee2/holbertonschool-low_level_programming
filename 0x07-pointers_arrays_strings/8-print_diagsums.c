#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum the diagonals of a matrix
 *
 * @a: pointer to matrix
 *
 * @size: length or width of 1 section of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0, down_diag = 0, up_diag = 0, lim_d = 0, lim_u = 0;

	while (i < size * size)
	{
		if (i % (size + 1) == 0 && lim_d < size)
		{
			down_diag += a[i];
			lim_d++;
		}
		if (i != 0 && i % (size - 1) == 0 && lim_u < size)
		{
			up_diag += a[i];
			lim_u++;
		}
		i++;
	}
	printf("%i, %i\n", down_diag, up_diag);
}
