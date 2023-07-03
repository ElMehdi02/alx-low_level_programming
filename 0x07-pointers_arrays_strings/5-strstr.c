#include "main.h"
#include <stdlib.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: subsrting to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstsr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}

	return (NULL);
}
