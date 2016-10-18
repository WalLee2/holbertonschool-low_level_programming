#include "holberton.h"
/**
 *main - writing a function that checks for lowercase or uppercase letter.
 *Description: Checking for lowercase or uppercase letters
 *Return: 1 if c is a uppercase or lowercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
