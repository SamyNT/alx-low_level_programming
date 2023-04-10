#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: charater array to be converted, contains only zeros and ones
 *
 * Return: b converted to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, toAdd;

	result = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		toAdd = (*b == '0') ? 0 : 1;
		result = result << 1 | toAdd;
		b++;
	}

	return (result);
}
