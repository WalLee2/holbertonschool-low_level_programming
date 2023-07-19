#include "main.h"

/**
 * print_chessboard - print a 8x8 chessboard to standard out
 *
 * @a: Chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	unsigned long int board_size, i = 0;

	board_size = sizeof(a) * sizeof(*a);
	while (i < board_size)
	{
		_putchar(a[0][i]);
		if ((i + 1) % 8 == 0)
		{
			_putchar('\n');
		}
		i++;
	}
}
