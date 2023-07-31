#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Get length of a string
 *
 * @s: Input string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcpy - Copy a string src to a malloc'ed space dest
 *
 * @src: String to copy
 *
 * @dest: Destination to be copied
 *
 * @offset: end of index of last copied string
 *
 * @end: Stopping index of src string to copy
 */
void _strcpy(char *src, char *dest, int offset, int end)
{
	int i;

	for (i = 0; i < end; i++)
	{
		dest[i + offset] = src[i];
	}
	if (offset)
	{
		dest[i + offset] = '\0';
	}
}

/**
 * string_nconcat - Copy over s1 and the first n bytes of s2 to a new space
 *
 * @s1: Input string 1 to copy over
 *
 * @s2: Input string 2 to copy over
 *
 * @n: The number of bytes of s2 to copy over
 *
 * Return: Pointer to new space with both strings copied over
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	len2 = _strlen(s2);
	if (n < len2)
	{
		len2 = n;
	}

	len1 = _strlen(s1);

	new_s = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_s == NULL)
	{
		return (NULL);
	}

	_strcpy(s1, new_s, 0, len1);
	_strcpy(s2, new_s, len1, len2);
	return (new_s);
}
