#include "main.h"
/**
 * print_binary - recursively prints the binary representation
 * @n: number to convert to binary
 * Return: void
 * Description: treats a number using bitwiswe AND (&) to verify
 * if the last digit at each recursion step is 1.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
