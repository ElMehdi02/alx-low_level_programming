#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	c = 'a';
	i = 0;
	while (i <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar('\n');
		i++;
	}
}
