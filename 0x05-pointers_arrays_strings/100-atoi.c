#include "main.h"

/**
 * _atoi - Convert string to int
 *
 * @s: input string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i = 0, negative = 0, next = 0, n = 0;

	while (s[i] != '\0')
	{
		next = i + 1;
		if (s[i] == 45 && (s[next] >= 48 && s[next] <= 57))
		{
			negative = 1;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			n += (s[i] - 48);
			if (s[next] >= 48 && s[next] <= 57)
			{
				n *= 10;
			}
			else if (s[next] != '\0')
			{
				negative = 0;
				break;
			}
		}
		i++;
	}
	return (negative ? (-1 * n) : n);
}
