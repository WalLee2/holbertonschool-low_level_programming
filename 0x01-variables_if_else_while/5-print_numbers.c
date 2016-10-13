#include <stdio.h>
/**
 *main - Printing out all numbers of base 10.
 *Return: 0 value is returned
 */

int main(void)

{
int i;

i = 0;
	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');
	return (0);
}
