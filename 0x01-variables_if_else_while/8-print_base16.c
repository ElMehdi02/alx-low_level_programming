#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line 
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <'g')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
