#include <stdio.h>
/**
 *main - FizzBuzz test.
 *Return: There is no return value.
 *
 */

int main(void)

{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
			i++;
		}
		else
		{
			printf("%d", i);
			printf(" ");
			i++;
		}
	}
	printf("\n");
	return (0);

}
