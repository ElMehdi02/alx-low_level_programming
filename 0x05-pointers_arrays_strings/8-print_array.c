#include "main.h"
#include <stdio.h>

/**
 * print_array - prints all elements of an array of integers
 * @a: the array
 * @n: the length of the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n >= 0)
	{
		while (i < n)
		{
			if (i + 1 < n)
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
