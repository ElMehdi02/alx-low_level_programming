#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: a pointer to the binary string
 *
 * Return: the unsigned int value of the binary string
 * or 0 if b is NULL or if b contains non- '0'/'1' characters
 */

unsigned int bianry_to_uint(const char *b)
{
	int i;
	unsigned int total;

	total = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		total = (total << 1) + (b[i] - '0');
	}
	return (total);
}
