#include "main.h"

/**
 * print_most_numbers - prints number
 * description: prints number starting from 0 to 9 except for 2 and 4
 */

void print_most_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		if (number == '2' || number == '4')
			number++;
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
