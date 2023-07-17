#include "main.h"
/**
 * _memset - Fill pointed to memory with a constant byte
 *
 * @s: pointer to memory
 *
 * @b: constant byte
 *
 * @n: fill size
 *
 * Return: Pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
