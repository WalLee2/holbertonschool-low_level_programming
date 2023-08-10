#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free allocated memory before exiting program
 * @d: Input struct to free
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	if (d->name)
	{
		free(d->name);
	}
	if (d->owner)
	{
		free(d->owner);
	}
	free(d);
}
