#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: the 2d array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum_1;
	unsigned int sum_2;

	i = 0;
	sum_1 = 0;
	sum_2 = 0;

	while (i < size)
	{
		sum_1 += a[(size * i) + i];
		sum_2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
