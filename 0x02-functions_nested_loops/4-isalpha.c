#include "main.h"
/**
 *_isalpha - Function check if the input is a  letter
 *@c: - number to compare
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

