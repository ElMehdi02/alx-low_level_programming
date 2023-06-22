#include "main.h"

/**
 * print_triangle - prints a triangle n times large
 * @size: the size of the triangle
 * description: prints a square n times large using _putchar
 */

void print_triangle(int size)
{
	int i;
	int a;
	int n;
	int z;

	n = size;
	i = 1;
	a = 1;
	z = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size + 1)
		{
			a = z;
			while ((n - a) - 1 > 0)
			{
				_putchar(' ');
				a++;
			}
			a = z;
			while (a >= 0)
			{
				_putchar('#');
				a--;
			}
			z++;
			i++;
			_putchar('\n');
		}
	}
}
