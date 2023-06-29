#include "main.h"

/**
 * _strncat - concatenates n bytes from string dest to src
 * @dest: the string to concatenate to
 * @src: the string to concatenate from
 * @n: the number of bytes to get from src
 * Return: the final result in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dest[i] = ' ';
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
