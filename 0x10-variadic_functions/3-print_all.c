#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all input
 * @format: specifies input format
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *format1 = format;
	char cval;
	int ival;
	double fval;
	char *sval;

	va_start(args, format);

	while (*format1)
	{
		switch (*format1)
		{
			case 'c':
			cval = va_arg(args, int);
			putchar(cval);
			break;
			case 'i':
			ival = va_arg(args, int);
			printf("%d", ival);
			break;
			case 'f':
			fval = va_arg(args, double);
			printf("%f", fval);
			break;
			case 's':
			sval = va_arg(args, char *);
			(sval) ? printf("%s", sval) : printf("(nil)");
			break;
			default:
			break;
		}

		format1++;
		if (*(format1) && (*(format1) == 'c' || *(format1) == 'i' ||
					*(format1) == 'f' || (*format1) == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
