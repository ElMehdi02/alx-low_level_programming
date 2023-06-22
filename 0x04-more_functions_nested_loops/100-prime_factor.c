#include <stdio.h>

/**
 * main - entry line
 * @void: no argument
 * Return: always 0
 */
int main(void)
{
	long int i, n;

	i = 612852475143;
	i= 2;
	while (n <= i)
	{
		if (i % n == 0)
		{
			i = i / n;
			n--;
		}
		n++;
	}
	printf("%lu\n", n);
	return (0);
}
