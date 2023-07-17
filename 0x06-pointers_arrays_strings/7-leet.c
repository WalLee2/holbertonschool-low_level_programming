#include "main.h"
#define CAPITAL 32

/**
 * leet - function that encodes a string into 1337 format
 *
 * @s: input string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	char target[] = {'a', 'e', 'o', 't', 'l'};
	char change[] = {'4', '3', '0', '7', '1'};
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < (int)sizeof(target))
		{
			if (s[i] == target[j] || s[i] == target[j] - CAPITAL)
			{
				s[i] = change[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
