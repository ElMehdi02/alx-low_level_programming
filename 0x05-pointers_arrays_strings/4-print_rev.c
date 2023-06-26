#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: the string
 */

void print_rev(char *s)
{
	int i;
	
	 i = 0;
	 while (str[i])
	 {
		 i++;
	 }
	 i--;
	 while (i >= 0)
	 {
		 _putchar(str[i]);
		 i--;
	 }
	 _putchar('\n');
}
