#include "main.h"

/**
 * _strchr - main function
 * Description: fills the first n adresses of a string with a
 * constant character c
 *
 * @s: string to be changed
 * @c: constant character used to be checked
 *
 * Return: A pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (s[i] == c)
			return (s);
		s++;
	}
	return (0);
}
