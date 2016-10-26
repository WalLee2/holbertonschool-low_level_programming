#include "holberton.h"
/**
 *_strcpy - Function that copes the string pointed to by src, including the terminating
 *null byte, to the buffer pointed to by dest
 *
 *@src: variable that holds the string.
 *
 *@dest: variable receiving the string.
 *
 *Return: The string is returned.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
