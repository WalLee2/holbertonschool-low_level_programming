#include "holberton.h"

/**
 *_isdigit - a function that checks for a digit that's 0 - 9.
 *@c: a variable that stores either digits or letters.
 *
 *Return: If c is a number, 1 will be returned. Else, 0 will be returned.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
