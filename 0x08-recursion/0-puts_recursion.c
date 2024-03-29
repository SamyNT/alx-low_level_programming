#include "main.h"

/**
 * _puts_recursion - main function
 * Description: Prints a String
 *
 * The method I will you use will be to recursively
 * print characters in continuous adresses till we reach
 * a null character
 *
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
