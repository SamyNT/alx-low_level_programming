#include "main.h"
/**
 * *_strncpy - copies a string from src to dest
 *
 * Description: *_strcat copies the src string to the the dest string
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds terminating null byte.It uses at most n bytes from src.
 *
 * @dest: pointer to the string with adress dest, src will be copied here
 * @src: pointer to the string to be copied.
 * @n: maximum number of bytes to be appended
 * Return: returns a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_count, i;

	src_count = 0;
	while (src[src_count] != '\0')
		src_count++;
	src_count--;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (i <= src_count)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
