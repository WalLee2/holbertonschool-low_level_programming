#include "3-calc.h"
/**
 * main - Take in arguments from user and compute the answer from input
 * @ac: Number of arguments from user
 * @av: Actual arguments from user. Assumption is numbers are passed in
 * Return: 0 on success or exit with error codes
 */
int main(int ac, char *av[])
{
	int (*p)(int, int), num;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	p = get_op_func(av[2]);
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	num = p(atoi(av[1]), atoi(av[3]));
	printf("%d\n", num);

	return (0);
}
