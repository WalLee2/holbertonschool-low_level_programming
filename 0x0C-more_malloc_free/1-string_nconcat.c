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
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0, total = 0;

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

	total = len1 + len2;
	new_s = malloc((total + 1) * sizeof(char));
	if (new_s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total && s1[i] != '\0'; i++)
	{
		new_s[i] = s1[i];
	}

	for (j = 0; i < total && s2[j] != '\0'; i++, j++)
	{
		new_s[i] = s2[j];
	}
	new_s[i] = '\0';
	return (new_s);
}
