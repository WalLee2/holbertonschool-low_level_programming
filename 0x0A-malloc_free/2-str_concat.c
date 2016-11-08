#include "holberton.h"
#include <stdlib.h>
/**
 *string_concat - A function that concatenates two strings
 *@s1: A pointer that points to one string.
 *@s2: A pointer that points to a different string.
 *Return: Pointer points to a newly allocated space in memory
 *that contains both strings from s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	int i, a;
	char *p;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (s2[a] != '\0')
	{
		a++;
	}
	p = malloc( (i * sizeof(char)) + (a * sizeof(char)) );
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	a = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		p[i] = s2[a];
		i++;
		a++;
	}
	p[i] = '\0';
	return (p);
}
