#include "main.h"

/**
 * printnumber - prints number
 * @nb: nb to be printed
 */

void printnumber(int nb)
{
	if (nb < 0)
	{
		_putchar('-');
		nb = nb * (-1);
		printnumber(nb);
	}
	else if (nb >= 10)
	{
		printnumber(nb / 10);
		printnumber(nb % 10);
	}
	else
	{
		_putchar(nb + 48);
	}
}

/**
 * print_times_table - prints number multiplication table
 * @n: n the number of multiplication columns
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int num = 0;

	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j < (n + 1))
			{
				num = i * j;
				printnumber(num);
				if (j < n && i * (j + 1) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (j < n && i * (j + 1) >= 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (j < n && i * (j + 1) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
