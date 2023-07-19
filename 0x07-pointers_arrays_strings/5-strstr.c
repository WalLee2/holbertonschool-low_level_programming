#include "main.h"

/**
 * _strstr - Find the first occurence of the substring
 *
 * @haystack: String to search
 *
 * @needle: String to match exactly
 *
 * Return: pointer to first occurence of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, match = 0;

	if (*haystack == *needle)
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		while ((needle[j] == haystack[i]) &&
		       needle[j] != '\0' && haystack[i] != '\0')
		{
			if (!match)
			{
				match = i;
			}
			i++;
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + match);
		}
		i++;
	}
	return (0);
}
