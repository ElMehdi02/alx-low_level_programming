#include "main.h"

/**
 * _pow_recursion - calculates x to the power of y
 * @x: the base
 * @y: the power
 * Return: x to the power of y if y > 0, -1 otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
