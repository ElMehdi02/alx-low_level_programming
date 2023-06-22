#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * description: prints number starting from 0 to 9
 */

void print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
