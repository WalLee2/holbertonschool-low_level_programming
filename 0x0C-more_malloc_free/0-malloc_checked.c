#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size of memory to be allocated
 *
 * Return: The pointer to the newly assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
	{
		exit(98);
	}
	return (tmp);
}
