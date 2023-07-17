#include "main.h"
/**
 * _strspn - find the length of a prefix substring
 *
 * @s: String to be searched
 *
 * @accept: substring to search for
 *
 * Return: 0 or the length of the characters found in accept
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, found = 0, counter = 0;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				found = 1;
			}
			i++;
		}

		if (found)
		{
			counter += 1;
		}
		else
		{
			return (counter);
		}
		found = 0;
		s++;
	}
	return (counter);
}
