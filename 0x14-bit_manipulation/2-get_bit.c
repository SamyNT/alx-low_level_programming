#include "main.h"
/**
 * get_bit - returns the value of the bit at a given index
 *  @n: input number
 *  @index: input index
 *  Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (8 * sizeof(n) - 1))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
