#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Depding on the output given,
 *this function will output "is positive",
 *"is zero", or "is negative". Followed by
 *a new line.
 * Return: The return value is zero.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n <= 0 && n >= 0)
		printf("% is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
