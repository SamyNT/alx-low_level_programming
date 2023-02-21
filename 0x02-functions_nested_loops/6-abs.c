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
		_putchar('0' + i);
		return (1);
	}
	else
	{
		_putchar('0' + i * -1);
		return (1);
	}
}
