#include "main.h"
/**
 * _pow_recursion - main function
 * Description: returns x^y
 *
 * @x: base
 * @y: power
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
