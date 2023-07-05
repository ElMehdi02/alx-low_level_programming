#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number
 * Return: if n > 0 returns the function of n, -1 otherwise.
 */

int factoial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
