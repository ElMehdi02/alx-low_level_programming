#include "main.h"

/**
* _isdigit - function that checks if passed char is a number
* @c: the char to be checked
* Return: 1 if number, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
