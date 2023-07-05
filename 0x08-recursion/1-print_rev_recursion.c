#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a given string in reverse
 * @s: the string
 */


void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
