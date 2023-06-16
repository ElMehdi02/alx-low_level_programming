#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar(48 + i / 10);
			putchar(48 + i % 10);
			putchar(' ');
			putchar(48 + j / 10);
			putchar(48 + j % 10);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
