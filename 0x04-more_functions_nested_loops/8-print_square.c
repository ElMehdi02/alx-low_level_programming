#include "main.h"

/**
 * print_square - prints a square n times large
 * @size: number of rows and columns
 * description: prints a square n times large using _putchar
 */

void print_square(int size)
{
	int i;
	int rows;

	i = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			rows = size;
			while (rows > 0)
			{
				_putchar('#');
				rows--;
			}
			i++;
			_putchar('\n');
		}
	}
}
