#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d == NULL)
			printf ("(nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
