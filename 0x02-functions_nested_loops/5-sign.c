#include "main.h"
/**
 * print_sign - prints the sign of a number 
 *@n: int n to be checked
 * Return: 1 and print '+' if n > zero
 * 0 and prints 0 if n is zero
 * -1 and prints '-' id n < zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
