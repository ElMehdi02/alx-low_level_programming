#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
