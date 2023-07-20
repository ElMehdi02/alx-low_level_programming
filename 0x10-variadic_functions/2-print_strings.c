#include "variadic_functions.h"

/**
 * print_strings - prints string, followed by a new line.
 * @separator: the seperator string
 * @n: the numbers of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (!string && i + 1 != n && separator)
			printf("(nil)%s", separator);
		else if (i + 1 != n && separator)
			printf("%s%s", string, separator);
		else if (!string)
			printf("(nil)");
		else
			printf("%s", string);
	}
	va_end(ap);
	printf("\n");
}
