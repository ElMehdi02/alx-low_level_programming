#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{ 
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i < 8 || j < 9)
			{
				putchar('_');
				putchar(' ');
			}
			j++
		} 
		i++
	}
	putchar('\n');
	return (0);
}
