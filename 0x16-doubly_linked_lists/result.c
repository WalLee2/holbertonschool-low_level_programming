#include "lists.h"
#include <stdlib.h>
/**
 *main - Function that passes two copies of the biggest three number digit
 *Return: 0 on success
 */
int main(void)
{
	int a, b, biggest_pal, compare;

	biggest_pal = 0;
	for (a = 999; a > 0; a--)
	{
		for (b = 999; b > 0; b--)
		{
			compare = is_nPalindrome(a, b);
			if (compare != -1 && compare > biggest_pal)
			{
				biggest_pal = compare;
				break;
			}
		}
	}
	printf("%d\n", biggest_pal);
	return (0);
}
/**
 *is_nPalindrome - Function that passes the integer to a funciton that changes
 *it to a string and then compares the number at the beginning and the end
 *and converts it back into a number
 *@a: first 3 digit integer
 *@b: second 3 digit integer
 *Return: The number that is a palindrome
 */
int is_nPalindrome(int a, int b)
{
	int c, i, j, midpoint, palindrome;
	char buf[10];

	c = a * b;
	itoa(c,buf,10);
	for (i = 0; buf[i] != '\0'; i++)
		;
	i--;
	midpoint = i / 2;
	for (j = 0; buf[j] != '\0' && j < midpoint + 1; j++, i--)
	{
		if (buf[j] != buf[i])
			return (-1);
	}
	palindrome = atoi(buf);
	return (palindrome);
}
/**
 *itoa - function that changes an integer to a string
 *@num: The number that is to be changed to a string
 *@str: A buffer to be filled up with the string
 *@base: If the number is base 2, 10, or 16
 */
char *itoa(int num, char *str, int base)
{
	int i, isNegative, rem;

	i = isNegative = rem = 0;
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return str;
	}
	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
		num = num/base;
	}
	if (isNegative)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}
