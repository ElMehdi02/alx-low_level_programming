#include "main.h"

/**
 * _isalpha - check for alphabetic char.
 * @c: the char to be checked.
 * Return: 1 if given char x is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

