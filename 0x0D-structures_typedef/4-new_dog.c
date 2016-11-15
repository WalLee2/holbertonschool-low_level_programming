#include "dog.h"
#include <stdlib.h>


dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;
	dog_t *doggy;

	for(i = 0; name[i] != '\0'; i++)
		lenN++;
	for(i = 0; owner[i] != '\0'; i++)
		lenO++;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(lenN));
	if (doggy->name == NULL)
		return (NULL);
	doggy->age = age;
	doggy->owner = malloc(sizeof(lenO));
	if (doggy->owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		doggy->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
