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
		for (i = 0; i < 10; i++)
		{
			putchar(a);
			putchar(b);
			if (i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
		a++;
	}
	putchar('\n');
	return(0);
}
