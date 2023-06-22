#include "main.h"

/**
* _most_numbers - prints the numbers from 0 to 9
* description: prints number starting from 0 to 9 except for 2 and 4
*/

void print_most_numbers(void)
{
	char bumber;

	bumber = '0';
	while (number <= '9')
	{
		if (number == '2' || number == '4')
			number++;
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
