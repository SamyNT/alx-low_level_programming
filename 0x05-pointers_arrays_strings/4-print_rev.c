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
	for (i = 1; i < count/2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + count - 1 - i);
		*(s + count - 1 - i) = temp;
	}

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
