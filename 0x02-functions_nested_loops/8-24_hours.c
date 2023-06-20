#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: always 0 (Success)
 */

void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
			b++;
		}
	a++;
	}
}
