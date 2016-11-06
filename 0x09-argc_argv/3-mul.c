#include <stdio.h>
/**
 *main - Multiplies two numbers
 *@argc: A variable that counts the number of arguments it takes in
 *@argv: A variable that turns the arguments into strings.
 *Return: The value 0 is returned.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argv[1] && argv[2])
	{
		result = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
