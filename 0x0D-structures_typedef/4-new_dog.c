#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - accounts for the length of the input, allocates memory
 *to a new space, prints the input in the space
 *@name: pointer variable that points to a string
 *@age: float variable that takes in a number
 *@owner: pointer variable that points to a string
 *Return: input values given
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;
	dog_t *doggy;

	for (i = 0; name[i] != '\0'; i++)
		lenN++;
	for (i = 0; owner[i] != '\0'; i++)
		lenO++;
	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(char *));
	if (doggy->name == NULL)
		return (NULL);
	doggy->age = age;
	doggy->owner = malloc(sizeof(char *));
	if (doggy->owner == NULL)
		return (NULL);
	doggy->name = name;
	doggy->owner = owner;
	return (doggy);
}
