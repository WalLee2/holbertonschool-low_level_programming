#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create memory, copy string, return pointer to the copied string
 *
 * @str: String to be copied
 *
 * Return: Pointer to copied string or NULL if string is NULL or malloc fails
 */
char *_strdup(char *str)
{
	int size, i;
	char *tmp;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
		;
	size += 1;

	tmp = malloc(size * sizeof(char));
	if (tmp == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp[i] = str[i];
	}
	tmp[i + 1] = '\0';

	return (tmp);
}
