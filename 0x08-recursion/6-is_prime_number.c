#include "main.h"

/**
 * check_if_divisible - checks if n is prime if n is not divisible by i
 * @n: the number to check if prime
 * @i: odd number to check if n is divisible by
 * Return: 1 if prime, 0 otherwise
 */

int check_if_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_if_divisible(n, i + 2));
}

/**
 * is_prime_number - check if n is prime
 * @n: number to check if prime
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (check_if_divisible(n, 3));
}
