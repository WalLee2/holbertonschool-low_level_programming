#include "holberton.h"
#include <stdio.h>
/**
 *print_binary_rev - A recursive helper function that prints
 *the binary number in reverse
 *@p: A variable that takes in the unsigned long int variable
 *from p
 */
void print_binary_rev(unsigned long int p)
{
	while (p > 0)
	{
		print_binary_rev(p >> 1);
		if (p & 1)
		{
			printf("1");
			p = p >> 1;
			break;
		}
		else
		{
			printf("0");
			p = p >> 1;
			break;
		}
	}
}
/**
 *print_binary - A function that calls a recursive function to print out binary
 *numbers in the correct order
 *@n: The number being passed by the main function
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		printf("0");
	print_binary_rev(n);
}
