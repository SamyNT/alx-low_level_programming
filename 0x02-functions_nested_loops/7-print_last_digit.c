#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 *@i: int containing the number whose last digit is to be calculated
 * Return: Always 0.
 */

int print_last_digit(int i)
{
	int last_digit = i % 10;

	_putchar(48 + last_digit);
	return (0);
}
