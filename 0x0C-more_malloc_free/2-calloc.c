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
	unsigned int i;
	void *new;
	char *tmp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new = malloc(nmemb * size);
	if (new == NULL)
	{
		return (NULL);
	}

	tmp = new;
	for (i = 0; i < nmemb; i++)
	{
		tmp[i] = 0;
	}

	return (new);
}
