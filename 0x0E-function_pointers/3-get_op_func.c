#include "3-calc.h"
#include <stdlib.h>
/**
 *get_op_func - a function that selects the correct function
 *to perform the opertion asked by the user
 *@s: a character pointer pointing to the symbol
 *an argument to the program
 *Return: one of the operator functions to perform calculations for a and b
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
