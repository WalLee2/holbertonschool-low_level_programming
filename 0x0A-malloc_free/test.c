#include <stdlib.h>
#include "holberton.h"
/**
<<<<<<< HEAD
 *
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int i, a;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while(i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return(NULL);
		}
	}
	for (i = 0; i < height; i++)
		for(a = 0; a < width; a++)
			grid[i][a] = 0;
	return (grid);
=======
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
			sub_array = str;
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
>>>>>>> 12672a645e2565bb1a23db2de2f798f9ffc26e3a
}
