#include "main.h"

/**
 * print_line - prints a line n times long
 * @n: number of lines
 * description: prints a line n times long using _putchar
 */

void print_line(int n)
{
	int i;

	i = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
