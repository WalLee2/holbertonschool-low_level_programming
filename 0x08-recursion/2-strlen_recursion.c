#include "main.h"
/**
 * _strlen_recursion - get the length of a string
 *
 * @s: string input
 *
 * Return: Length of the entire string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	count++;
	return (count += _strlen_recursion(s + 1));
}
