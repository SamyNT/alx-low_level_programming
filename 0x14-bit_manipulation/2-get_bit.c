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

	bit = (n >> index) & 1;
	if (bit == 0 || bit == 1)
		return (bit);
	else
		return (-1);
}
