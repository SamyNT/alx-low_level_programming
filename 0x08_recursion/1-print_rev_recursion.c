#include "main.h"

/**
 * reverse - reversing function
 * Description: recursively reverts a string
 * The method I will you use will be to recursively
 * print characters in continuous adresses till we reach
 * a null character
 *
 * @s: string to be printed
 * Return: void
 */
void reverse(char *s)
{

	if (*s != '\0')
	{
		reverse(++s);
	}
	_putchar(*s);
}
/*
 * _print_rev_recursion - main function
 * Description: Prints a String
 */
void _print_rev_recursion(char *s)
{
	reverse(s);
	_putchar('\n');
}
