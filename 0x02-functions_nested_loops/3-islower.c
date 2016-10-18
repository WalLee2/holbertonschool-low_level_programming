#include "holberton.h"
/**
 *main - writing a function that checks for lowercase characters.
 *Description: checking for lowercase characters.
 *Return: 1 if c is lowercase, 0 for other cases.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
