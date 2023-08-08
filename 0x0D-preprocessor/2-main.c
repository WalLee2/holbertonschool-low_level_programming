#include <stdio.h>
#define F_NAME __BASE_FILE__

/**
 * main - Print the name of the file
 *
 * Return: 0 always
 */
int main(void)
{
	printf("%s\n", F_NAME);
	return (0);
}
