#include <stdio.h>

/**
 *main - printing out a-z and A-z on the same line
 *Return: The value returns zero.
 */
int main(void)

{
	char i, a, b;

	for (a = 1; a <= 2; a++)
		if (a == 1)
		{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		}
		else if (a == 2)
		{
			for (b = 'A'; b <= 'Z'; b++)
				putchar(b);
		}
	putchar('\n');
	return (0);
}
