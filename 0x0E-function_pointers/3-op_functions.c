#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - Add two integers
 *@a: integer 1
 *@b: integer 2
 *Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtract two integers
 *@a: integer 1
 *@b: integer 2
 *Return: The result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiply two integers
 *@a: integer 1
 *@b: integer 2
 *Return: The result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides two numbers
 *@a: integer 1
 *@b: integer 2
 *Return: The result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - modulo two numbers
 *@a: integer 1
 *@b: integer 2
 *Return: The result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
