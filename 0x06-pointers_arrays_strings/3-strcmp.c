#include "main.h"

/**
 * _strcmp - Compare two strings s1 and s2. Return a value less than or \
 * greater than 0 if the two strings do not match. Return 0 if there is a match
 *
 * @s1: Source string
 *
 * @s2: String compared to s1
 *
 * Return: (< 0) or (> 0) if s1 does not match s2. (== 0) if s1 matches s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
