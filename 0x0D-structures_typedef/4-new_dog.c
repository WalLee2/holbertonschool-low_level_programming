#include "dog.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i;
	char *temp;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	temp = name;
	for(i = 0; *temp != '\0'; i++, temp++)
		;
	if (i == 0)
		return (NULL);
	doggy->name = malloc(sizeof(char) * i);
	if (doggy->name == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	temp = owner;
	for(i = 0; *temp != '\0'; i++, temp++)
		;
	if (i == 0)
		return (NULL);
	doggy->owner = malloc(sizeof(char) * i);
	if (doggy->owner == NULL)
		return (NULL);
	doggy->owner = owner;
	return (doggy);
}
