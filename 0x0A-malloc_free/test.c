#include <stdlib.h>
#include "holberton.h"
/**
 *strlen - Gets the length of each individual word.
 *
 *
 */
int countw(char *strlen)
{
	int i;

	i = 0;
	while (*strlen != '\0')
	{
		if (*strlen == " ")
			strlen++;
		else if (strlen != " " && strlen != '\0')
		{
			strlen++;
		}
		i++;
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
	int i, wcount, wlen, j;
	char **w_array, *sub_array;
	wcount = i = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	wcount = countw(*str);
	if (wcount == 0)
		return (NULL);
	array = malloc((wcount + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (*str != '\0' && i < wcount)
	{
		if (*str == " ")
			str++;
		else
		{
			sub_array = str
			while (*str != " " && *str != '\0')
				i++, wlen++;
			array[i] = malloc((wlen + 1) * sizeof(char));
			if (array[i] == NULL)
			{
				for (i = i -1; i >= 0; i--)
				{
					free(array[i]);
				}
				free(array);
				return (NULL);
			}
			while (sub_array != " " && sub_array != '\0')
			{
				array[i][j] = *sub_array;
				sub_array++;
				j++;
			}
			i++;
			j = 0;
			array[i][j] = '\0';
		}
		w_array[w_count] = NULL;
		return (w_array);
	}
}
