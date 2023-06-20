#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the numbers starting from n to 98
 * @n: the number to start from
 */

void print_to_98(int n)
{
	int num = n;

	while (num != 98)
	{
		if (num < 98)
		{
			printf("%d, ", num);
			num++;
		}
		else if (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	printf("%d\n", num);
}
