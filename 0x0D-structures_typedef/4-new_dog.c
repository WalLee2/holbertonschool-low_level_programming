#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creating a new dog
 *@name: Name of the dog
 *@age: a float value
 *@owner: a pointer that points to a string
 *Return: The name, age, and owner is returned
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
