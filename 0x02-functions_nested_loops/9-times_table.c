#include "main.h"
/**
 * times_table - Function that prints the times table of 9
 *
 * Return: Always the last digit.
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if ((i * j) / 10 != 0)
			_putchar('0' + (i * j) / 10);
			else
			_putchar(' ');
			_putchar('0' + (i * j) % 10);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
