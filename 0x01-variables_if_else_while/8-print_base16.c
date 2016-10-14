#include <stdio.h>
/**
 *main - Printing all numbers of base 16, in lowercase, followed by a new line.
 *Return: The value 0 is returned
 */

int main(void)

{
	int i, a = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
