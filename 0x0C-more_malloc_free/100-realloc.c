#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void _copy(char *o_ptr, int old_size, char *n_ptr)
{
	int i = 0;

	for (i = 0; i < old_size; i++)
	{
		*(n_ptr + i) = *(o_ptr + i);
	}
}

void *new_space(int size)
{
	void *new;

	new = malloc(size);
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);

}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new = NULL;
	char *o_ptr = NULL, *n_ptr = NULL;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		printf("Returning pointer!\n");
		return (ptr);
	}
	else if (!ptr)
	{
		return (new_space(new_size));
	}
	new = new_space(new_size);
	if (!new)
	{
		return (NULL);
	}
	n_ptr = new;
	o_ptr = ptr;

	_copy(o_ptr, old_size, n_ptr);
	free(ptr);
	return (new);
}
