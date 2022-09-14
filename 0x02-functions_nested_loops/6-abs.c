#include "main.h"
/**
 * _abs - prints the absolute value of the given integer
 * @i: given integer
 * Return: Always 1
 */
int _abs(int i)
{
	if (i >= 0)
	{
		_putchar('i');
		return (1);
	}
	else
	{
		int val = -1 * i;

		_putchar(val);
		return (1);
	}
}
