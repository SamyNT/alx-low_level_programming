#include "main.h"
/**
 * print_most_numbers - function that prints the alphabet
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48 ; c <= 58 ; c++)
	{
		if (c != 50 && c != 52)
		_putchar(c);
	}
	_putchar('\n');
}
