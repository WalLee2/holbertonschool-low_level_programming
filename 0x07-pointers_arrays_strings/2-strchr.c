#include "main.h"
#include <stddef.h>

/**
 * _strchr - return the pointer to the location of the first match
 *
 * @s: pointer to string
 *
 * @c: character to match with
 *
 * Return: pointer to the first instance of match
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (NULL);
}
