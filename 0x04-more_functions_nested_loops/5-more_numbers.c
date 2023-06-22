#include "main.h"

/**
 * print_one_digit - prints one digit
 * @n: the number to be printed
 */

void print_one_digit(int n)
{
	_putchar(n % 10 + 48);
}

/**
 * print_numbers - prints numbers from 0 to 14
 * description: prints numbers starting from 0 to 14
 */

void print_numbers(void)
{
	int number;

	number = 0;
	while (number <= 14)
	{
		if (number >= 10)
		{
			_putchar(number / 10 + 48);
			print_one_digit(number);
		}
		else
			print_one_digit(number);
		number++;
	}
	_putchar('\n');
}

/**
 * more_numbers - prints numbers
 * description: prints numbers starting from 0 to 14 10 timess
 */

void more_numbers(void)
{
	int i;

	i = 1;
	while (i <= 10)
	{
		print_numbers();
		i++;
	}
}
