#include "main.h"

/**
 * swap_int - swap integers via pointers
 *
 *@a: first integer to swap
 *
 *@b: second integer to swap
 */

void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;
	*b = tmp;
}
