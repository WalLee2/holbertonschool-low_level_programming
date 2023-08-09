#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print contents of dog struct
 * @d: Struct that holds properties of dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name = (d->name == NULL ? "(nil)" : d->name);
		d->owner = (d->owner == NULL ? "(nil)" : d->owner);
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
