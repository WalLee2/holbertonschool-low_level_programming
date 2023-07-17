#include "main.h"

/**
 * _memcpy - copy n bytes of memory from src to dest
 *
 * @dest: destination memory
 *
 * @src: source memory containing bytes
 *
 * @n: amount of specified bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
