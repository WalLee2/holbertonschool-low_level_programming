#include <stdio.h>
/**
 *main - Print out the alphabet except for letters q and e.
 *Return: 0 will be returned.
 */

int main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
