<<<<<<< HEAD
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
=======
#include <stdlib.h>
#include "holberton.h"
/**
 *countw - Gets the length of each individual word.
 *@strlen: A variable that takes in a string
 *Return: The length of the string
 */
int countw(char *strlen)
{
	int i;

	i = 0;
	while (*strlen != '\0')
	{
		if (*strlen == ' ')
			strlen++;
		else
		{
			while (*strlen != ' ' && *strlen != '\0')
			{
				strlen++;
			}
			i++;
		}
	}
	return (i);
}
/**
 *strtow - A function that splits a string into words
 *@str: a variable that takes in the string.
 *Return: The output of the string on a new line.
 */
char **strtow(char *str)
{
	int i, w_count, w_len, j;
	char **w_array, *sub_array;

	w_count = i = w_len = j = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	w_count = countw(str);
	if (w_count == 0)
		return (NULL);
	w_array = malloc((w_count + 1) * sizeof(char *));
	if (w_array == NULL)
		return (NULL);
	while (*str != '\0' && i < w_count)
	{
		if (*str == ' ')
			str++;
		else
		{
			sub_array = str;
			while (*str != ' ' && *str != '\0')
				str++, w_len++;
			w_array[i] = malloc((w_len + 1) * sizeof(char));
			if (w_array[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
					free(w_array[i]);
				free(w_array);
				return (NULL);
			}
			while (*sub_array != ' ' && *sub_array != '\0')
			{
				w_array[i][j] = *sub_array;
				sub_array++; j++;
			}
			w_array[i][j] = '\0';
			i++; j = 0; w_len = 0; str++;
		}
	}
	w_array[w_count] = NULL;
	return (w_array);
>>>>>>> 12672a645e2565bb1a23db2de2f798f9ffc26e3a
}
