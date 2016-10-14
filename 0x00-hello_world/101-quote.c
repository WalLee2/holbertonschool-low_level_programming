#include <unistd.h>
/**
 *main - The standard error will print a certain output
 *Return: The value will return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n",
	      58);
	return (1);
}
