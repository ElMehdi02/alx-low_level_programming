#include "main.h"
#include <stdio.h>

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
	sign = 0;
	resuly = 0;
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
	}
	return (result);
}

/**
 * main - Entry point
 * Descripton: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n")
			return (1);
	}

	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
