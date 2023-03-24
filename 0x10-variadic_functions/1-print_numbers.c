#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - returns the sum of all its parameters
 *
 * @separator: number of numbers to sum
 * @n: number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned  int i;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arglist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}

