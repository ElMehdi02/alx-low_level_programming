#include "main.h"

/**
 * str_len - computes the length of the string
 * @s: the string
 * Return: returns the length of s
 */

int str_len(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + str_len(s + 1));
}

/**
 * check_if_palindrome - check if string is palindrome
 * @s: the string to be checked
 * @i: index starting from the beginning of s
 * @j: index starting from the end
 * Return: returns 1 if s is palindrome, 0 otherwise.
 */

int check_if_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (i == j - 1)
		return (1);
	else if (i == j)
		return (1);
	return (check_if_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: the string to be checked
 * Return: returns 1 if s is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s) - 1;
	if (len == 0)
		return (1);
	else if (len == 1)
		return (1);
	return (check_if_palindrome(s, 0, len));
}
