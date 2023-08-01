#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocate nmemb units of size and return pointer to the new space
 *
 * @nmemb: The total amount of space
 *
 * @size: The size of each space of nmemb
 *
 * Return: Void pointer to the newly allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *new, total = 0;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	total = nmemb * size;
	new = malloc(total);
	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		new[i] = 0;
	}

	return (new);
}
