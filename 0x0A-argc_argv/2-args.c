#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	int i;

	i = -1;
	while (i++ < argc - 1)
		printf("%s\n", argv[i]);
	return (0);
}
