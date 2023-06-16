#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
	if (i == 101 || i == 113)
		i++;
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
