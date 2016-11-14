#include "holberton.h"
#include <stdlib.h>
/**
 *lengthSearch - A function that finds the number of characters.
 *@p: a variable that copies the string
 *Return: The length of the characters
 */
int lengthSearch(char *p)
{
	int n;
	n = 0;
	while (*p != '\0')
	{
		if (*p == " ")
		{
			p++;
		}
		else if (*p != " ")
		{
			n++;
		}
	}
	return (n);
}
/**
 *charSearch - A function that pulls all the characters
 *@p: a variable that copies the string
 *Return: All the characters
 */
char charSearch(char *p)
{
	int n;
	char *c;
	n = 0;
	while (*p != '\0')
	{
		if (*p == " ")
		{
			p++;
		}
		else if (*p != " ")
		{
			*c[n] = *p[n];
		}
	}
	return (c);
}

/**
 * strtow - a function that splits a string into words
 * @str - a pointer that points to a string
 * Return: Returns NULL if the string is NULL or an empty string
 */

char **strtow(char *str)
{
	int i, a, lenS;
	char **array, *temp;

	if (str == NULL || str =="")
		return (NULL);
	lenS = lengthSearch(str);
	array = malloc((lenS + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	*temp = str;
	while (*temp != '\0')
	{
		if (*temp == " ")
		{
			
		}
	}
}
