#include "main.h"

/**
 * _strlen_recursion - main function
 * Description: returns the length of a str
 *
 * @s: string whose length is to be calculated
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
