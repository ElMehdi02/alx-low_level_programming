#include "main.h"

/**
 * swap_int - swaps two int pointer's value.
 * @a: the first in pointer
 * @b: the second in pointer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
