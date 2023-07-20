#include "main.h"

/**
 * _pow_recursion - find x multiplied y times or x to the power of y
 *
 * @x: The base or number to be multiplied
 *
 * @y: The exponent or the number of times to multiply x by
 *
 * Return: The product or final result of the multiplication
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x *= _pow_recursion(x, y - 1));
}
