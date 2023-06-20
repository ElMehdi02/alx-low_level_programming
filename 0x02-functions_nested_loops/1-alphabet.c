#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabets
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
