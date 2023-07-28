#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_count - find and count the number of words
 *
 * @s: string to find words in
 *
 * Return: The count of each word
 */
int word_count(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 && (s[i + 1] != 32 && s[i + 1] != '\0'))
		{
			count++;
		}
	}
	return (count);
}

/**
 * _strlen - Find the length of a word. Used also to fast forward
 * to the next word
 *
 * @s: Input string to find length
 *
 * Return: The length of a word
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
		;

	return (i);
}

/**
 * _strcpy - copy each word into a single double pointer
 *
 * @s: The word to copy
 *
 * @w_list: Word list to send back to calling program
 *
 * @len: Length of the word
 *
 * @wc: number of words
 *
 * Return: 0 on success and 1 on failure
 */
int _strcpy(char *s, char **w_list, int len, int wc)
{
	char *tmp = NULL;
	int i;

	tmp = malloc((len + 1) * sizeof(char));
	if (tmp == NULL)
	{
		printf("Malloc failed!\n");
		return (1);
	}

	for (i = 0; i < len; i++)
	{
		tmp[i] = s[i];
	}
	tmp[i] = '\0';

	for (i = 0; i < wc; i++)
	{
		if (w_list[i] == NULL)
		{
			w_list[i] = tmp;
			break;
		}
	}
	return (0);
}

/**
 * get_words - Find all the words from input string and store them
 *
 * @w_list: Double pointer to store all words found
 *
 * @s: Input string to find words
 *
 * @wc: word count
 *
 * Return: 0 on success 1 on failure
 */
int get_words(char **w_list, char *s, int wc)
{
	int i = 0, len = 0, failed = 0, found = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32 && (s[i + 1] != '\0' && s[i + 1] != 32))
		{
			len = _strlen(&s[i]);
			failed = _strcpy(&s[i], w_list, len, wc);
			if (failed)
			{
				return (failed);
			}
			found = 1;
		}
		if (found)
		{
			i += _strlen(&s[i]);
			found = 0;
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/**
 * strtow - Find all words in a given string and return them to caller
 *
 * @str: String to scan for words
 *
 * Return: Double pointer to word list
 */
char **strtow(char *str)
{
	int i, wc = 0, status = 0;
	char **w_list = NULL;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	wc = word_count(str);

	w_list = malloc((wc + 1) * sizeof(char *));
	if (w_list == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < wc; i++)
	{
		w_list[i] = NULL;
	}

	status = get_words(w_list, str, wc);
	if (status == 1)
	{
		for (i = 0; i < wc; i++)
		{
			if (w_list[i] != NULL)
			{
				free(w_list[i]);
			}
		}
		free(w_list);
	}

	return (w_list);
}
