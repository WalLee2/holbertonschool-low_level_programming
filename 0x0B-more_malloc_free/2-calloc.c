#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - A function that allocates memory for an array
 *@nmemb: memory allocation for the number of elements of the array
 *@size: the number of bytes within each element
 *Return: The memory allocation.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * sizeof(size));
	if (p == NULL)
		return (NULL);
	return (p);
}
