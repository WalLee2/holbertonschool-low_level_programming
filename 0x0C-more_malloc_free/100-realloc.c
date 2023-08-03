#include "main.h"
#include <stdlib.h>

/**
 * _copy - copy contents of old array into new array
 * @o_ptr: pointer pointing at old array
 * @old_size: Size of the old array
 * @n_ptr: pointer pointing at new array
 */

void _copy(char *o_ptr, int old_size, char *n_ptr)
{
	int i = 0;

	for (i = 0; i < old_size; i++)
	{
		*(n_ptr + i) = *(o_ptr + i);
	}
}

/**
 * new_space - wrapper around malloc to condense the calling function
 * @size: Amount to allocate using malloc
 * Return: Pointer to newly memory allocated space
 */
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

/**
 * _realloc - Resize an array passed by user if it exists
 * @ptr: Pointer to old array
 * @old_size: Size of the old array
 * @new_size: Size of the new array
 * Return: Void pointer to the newly allocated space or the old pointer
 */
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
