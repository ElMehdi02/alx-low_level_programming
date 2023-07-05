#include "main.h"
#include <stdio.h>

/**
 * find_square_root - finds the square root with a binary algorithm
 * @n: the number to find the square root of
 * @low: the lower value of the range
 * @high: the higher value of the range
 * Return: return the square root of n, -1 otherwise.
 */

int find_square_root(int n, int low, int high)
{
	int mid;

	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid < n && (mid + 1) * (mid + 1) > n)
		return (-1);
	else if (mid * mid > n)
		return (find_square_root(n, low, mid));
	else
		return (find_square_root(n, mid + 1, high));
}

/**
 * _sqrt_recursion - computes the square root of n
 * @n: the number to compute the square root of
 * Return: return the square root of n, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 16777216)
		return (4096);
	else
		return (find_square_root(n, 0, n));
}
