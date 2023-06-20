#include "main.h"

/**
 * check - check if it's the last column of each line.
 * @i: int i the number to be multiplied
 * @mult: int mult the number i is multiplied with
 */

void check(int i, int mult)
{
	if (mult < 9 && (i * (mult + 1)) >= 10)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (mult < 9 && (i * (mult + 1)) < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
}

/**
 * times_table - prints the 9 times table, starting with 0.
 * print ', ' otherwise.
 * Return: always 0 (Success)
 */

void times_table(void)
{
	int i;
	int mult;
	int a;

	i = 0;
	while (i <= 9)
	{
		mult = 0;
		while (mult <= 9)
		{
			a = i * mult;
			if (i * mult >= 10)
			{
				_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
				check(i, mult);
			}
			else
			{
				_putchar(a + 48);
				check(i, mult);
			}
			mult++;
		}
		mult = 0;
		i++;
		_putchar('\n');
	}
}
