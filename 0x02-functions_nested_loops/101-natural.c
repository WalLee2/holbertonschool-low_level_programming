#include <stdio.h>


int main(void)
{
	int i, n;

	i = 0;
	while(i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}
