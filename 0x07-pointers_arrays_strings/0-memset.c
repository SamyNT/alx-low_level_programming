#include "main.h"

/**
 * _memset - main function
 * Description: fills the first n adresses of a string with a
 * constant character c
 *
 * @s: string to be changed
 * @b: constant character used to fill
 * @n: number of bytes to filled by c
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i <= n - 1; i++)
		s[i] = b;
	return (s);
}
