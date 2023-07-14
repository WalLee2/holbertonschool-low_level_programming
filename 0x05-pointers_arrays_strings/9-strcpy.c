#include "main.h"
/**
 * _strcpy - copy a string from src to dest
 *
 * @dest: pointer to the string to be copied to
 *
 * @src: pointer to the string to be copied from
 *
 * Return: pointer to destination of the newly copied string
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (sizeof(dest) < sizeof(src))
	{
		return (dest);
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
