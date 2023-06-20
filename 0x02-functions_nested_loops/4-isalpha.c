#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the char is to be checked.
 * Return: 1 if given char x is lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	return( c >= 97 && c <= 122) || (c >= 65 && c <= 90);
}
