#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string to locate c from.
 * @c: the character to locate in s.
 * Return: a pointer to c in the string s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
