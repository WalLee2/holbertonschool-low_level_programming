#include <stdio.h>
/**
 *main - printing the alphabet backwards from lowercase z to a
 *Return: Value will return 0.
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
