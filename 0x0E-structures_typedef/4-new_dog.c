#include <stdlib.h>
#include "dog.h"

/**
 * new_space - allocate new space for input string
 * @s: Input string
 * Return: Newly allocated space for input string
 */
void *new_space(char *s)
{
	void *tmp;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	tmp = malloc((i + 1) * sizeof(char));
	if (tmp == NULL || i == 0)
	{
		return (NULL);
	}

	return (tmp);

}
/**
 * clean_up - Free malloc'd space if a failure occurs
 * @d: Dog struct to free
 */
void clean_up(dog_t *d)
{
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
/**
 * _strcpy - Copy contents of input string into newly allocated space
 * @s: Input string
 * Return: Pointer to copied string
 */
char *_strcpy(char *s)
{
	void *tmp;
	char *ptr;
	int i;

	tmp = new_space(s);
	if (tmp == NULL)
	{
		return (NULL);
	}

	ptr = tmp;
	for (i = 0; s[i] != '\0'; i++)
	{
		ptr[i] = s[i];
	}
	ptr[i] = '\0';

	return (ptr);
}

/**
 * new_dog - Create new dog properties
 * @name: Name of dog
 * @age: Age of dog of type float
 * @owner: Owner of dog
 * Return: New dog properties
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || !owner)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->name = _strcpy(name);
	if (new->name == NULL)
	{
		clean_up(new);
		return (NULL);
	}

	new->owner = _strcpy(owner);
	if (new->owner == NULL)
	{
		clean_up(new);
		return (NULL);
	}

	new->age = age;

	return (new);
}
