#include "main.h"
/**
 * print_rev - main function
 * Description: reverses a string
 *
 *
 *@s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int count, i;
	char temp;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	while (count  >= 0)
	{
		_putchar(*(s + count--));
	}
	_putchar('\n');
}
