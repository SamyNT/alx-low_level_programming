#include "main.h"
/**
 *_islower - Function check if the input is a lower case letter
 *@c - number to compare
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

