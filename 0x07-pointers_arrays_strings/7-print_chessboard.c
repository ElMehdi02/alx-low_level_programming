#include "main.h"

/**
 * print_chessboard - prints a given chess board.
 * @a: the board
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (a[i] && i < 8)
	{
		j = 0;
		while (a[i][j] && j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
