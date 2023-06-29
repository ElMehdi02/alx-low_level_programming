#include "main.h"

/**
 * _strcmp - compares the two string s1 and s2
 * @s1: the first string
 * @s2: the second string
 * Return: returns the difference between the two strings;
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
