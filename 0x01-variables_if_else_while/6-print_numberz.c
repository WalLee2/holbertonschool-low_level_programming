#include <stdio.h>
/**
 *main - printing out all numbers of base 10, starting from 0 using putchar
 *Return: The value will return 0.
 */

int main(void)
{
	int i = 0;
	int a = '0';

	while (i < 10)
	{
		putchar(a);
		i++;
		a++;
	}
	putchar('\n');
	return (0);
}
