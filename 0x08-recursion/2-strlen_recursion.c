#include "main.h"

/**
 * _strlen_recursion - gets the len of a string using recursion
 * @s: the string
 * Return: the length of string s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
