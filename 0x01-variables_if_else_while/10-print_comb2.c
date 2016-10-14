#include <stdio.h>
/**
 *main - Writing a program that prints numbers from 0 to 99.
 *Return: The value will return 0.
 */

int main(void)
{
	int i, a = '0', b = '0';

	for ( i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
		for (i = 0; i < 10; i++)
		{
			putchar(b);
			b++;
		}
	}
	putchar('\n');
	return(0);
}
