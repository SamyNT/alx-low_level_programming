#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 *
 * @separator: string separator
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned  int i;
	char *words;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(arglist, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}

