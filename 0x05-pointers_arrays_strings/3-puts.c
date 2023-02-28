#include "main.h"
/**
 * _puts - main function
 * Description: prints a string
 *
 *
 *@str: input string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
