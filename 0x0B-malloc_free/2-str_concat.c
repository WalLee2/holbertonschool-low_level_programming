#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - get length of a string
 *
 * @s: input string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		s = "";
	}

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _concat - append string to an existing character array
 *
 * @new_str: character array
 *
 * @s: input string to append
 *
 * @len: length of input string
 */
void _concat(char *new_str, char *s, int len)
{
	int i, new_len;

	new_len = _strlen(new_str);

	for (i = 0; i < len; i++)
	{
		new_str[i + new_len] = s[i];
	}
	if (new_len)
	{
		new_str[i + new_len + 1] = '\0';
	}
}

/**
 * str_concat - combine or concatenate two strings
 *
 * @s1: first input string
 *
 * @s2: input string to append
 *
 * Return: pointer to new string in new memory
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str = "";
	int l1, l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	new_str = malloc((l1 + l2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}

	_concat(new_str, s1, l1);
	_concat(new_str, s2, l2);

	return (new_str);
}
