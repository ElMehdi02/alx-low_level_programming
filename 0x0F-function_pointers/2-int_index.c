#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the pointer to function used to find the integer
 * Return: return -1 if size <= 0 or if array is NULL
 * or cmp is NULL, index of integer otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
