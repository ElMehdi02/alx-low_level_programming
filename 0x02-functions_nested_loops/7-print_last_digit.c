#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int n the number to get the last digit of
 * Return: the last digit of n
 */

int prints_last_digit(int n)
{
	int n;

	a = 1;
	if (n < 0)
		a *= -1;
	a *= n % 10;
	_putchar(a + 48);
	return (a);
}
