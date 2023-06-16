#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * putchar prints the alphabets
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
	putchar('\n');
	return (0);
}
