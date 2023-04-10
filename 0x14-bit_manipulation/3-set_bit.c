#include "main.h"
/**
 * set_bit - sets the bit at a given index to 1
 *  @n: pointer to input number
 *  @index: input index
 *  Return: 1 if success -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
		return (-1);
	*n = (*n) | (1 << index);
	return (1);
}
