#include <stdio.h>

/**
 * main - prints the alphabets in lowercase,
 * followed by a new line, exceptq and e 
 * Return: always 0 (Success)
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
