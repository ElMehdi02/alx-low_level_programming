#include "main.h"

/**
 * str_len - calculate the length of a string
 * @s: the string
 * Return: return the length
 */

int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _atoi - converts a string to int
 * @s: the string to convert
 * Return: return the value of the string converted
 */

int _atoi(char *s)
{
	int result;
	int sign;
	int i;
	int len;

	i = 0;
	len = str_len(s);
	sign = 1;
	result = 0;
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	if (len > i)
	{
		if (sign == -1)
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result *= 10;
				result -= s[i] - 48;
				i++;
			}
		}
		else
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result *= 10;
				result += s[i] - 48;
				i++;
			}
		}
	}
	return (result);
}
