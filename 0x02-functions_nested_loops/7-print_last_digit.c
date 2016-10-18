#include "holberton.h"

/**
 *print_last_digit - prints the last of a number
 *
 *@r: stores the last digit and goes through the condtional statements
 *
 *main - evaluates last digit
 *
 *Return: the value of the last digit
 */

int print_last_digit(int r)

{
	_putchar(r % 10);
	return (r);
}
