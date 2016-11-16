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
	int i, a;
	char *temp;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	temp = name;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
	doggy->name = malloc(sizeof(char) * i);
	if (doggy->name == NULL || i == 0)
		return (NULL);
	for (a = 0; a < i; a++)
		doggy->name[a] = name[a];
	doggy->name[a] = '\0';
	doggy->age = age;
	temp = owner;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
	doggy->owner = malloc(sizeof(char) * i);
	if (doggy->owner == NULL || i == 0)
		return (NULL);
	for (a = 0; a < i; a++)
		doggy->owner[a] = owner[a];
	doggy->owner[a] = '\0';
	if (doggy->owner == NULL)
		return (NULL);
	return (doggy);
}
