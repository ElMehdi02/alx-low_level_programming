#include "search_algos.h"

/**
 * linear_search - implements linear search
 * @array : pointer to array
 * @size : size of the array
 * @value : value to look for
 * Return: int (index of item if found, -1 otherwise)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
