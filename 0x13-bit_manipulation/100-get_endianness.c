#include <stdio.h>
/**
 *get_endianness - A function that finds the endianess of your machine
 *Return: The char pointer to an address
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;
	return (*c);
}
