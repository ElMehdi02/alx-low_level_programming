#include <stdio.h>

/**
 * main - printthe alphabet in lowercase
 * putchar prints the alphabets
 * Return: always 0 (Success)
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
