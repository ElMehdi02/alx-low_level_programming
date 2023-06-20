#include "main.h"

/**
 * _abs -return the absolute value of a number
 * @n: int n to be returned
 * Return: n if => 0
 * n * -1 if n < 0
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
