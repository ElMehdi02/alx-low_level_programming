#include <stdio.h>

/**
 * main - entry point
 * description - print the sum of the even value in the range
 * of first fibonacci numbers before 4000000
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a;
	long int b;
	long int c;
	long int sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a <= 3524578)
	{
		if (a % 2 == 0)
			sum += a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
