#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - A function that concatenates all the arguments of the program
 *@ac: The number of arguments
 *@av: The characters being passed
 *Return: The arguments being passed through
 */
char *argstostr(int ac, char **av)
{
	int i, a;
	char *temp, *r;

	r = (char *)malloc(ac * sizeof(char *));
	temp = r;
	for (i = 0; i < ac; i++)
	{
		a = 0;
		while (av[i][a] != '\0')
		{
			*r = av[i][a];
			a++;
			r++;
		}
		*r = '\n';
		r++;
	}
	if (temp)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}

}