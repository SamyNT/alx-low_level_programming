#include "main.h"
/**
 * *_strncat - concatenates two strings using at most n bytes from src
 *
 * Description: *_strcat appends the src string to the the dest string
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds terminating null byte.It uses at most n bytes from src.
 *
 * @dest: pointer to the string with adress dest, src will be appended here
 * @src: pointer to the sstring to be appended.
 * @n: maximum number of bytes to be appended
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int countdest, countsrc;

	countdest = countsrc = 0;
	while (*(dest + countdest) != 0)
		countdest++;
	while (countsrc < n && *(src + countsrc) != '\0')
	{
		*(dest + countdest) = *(src + countsrc);
		countdest++;
		countsrc++;
	}
	/*(dest + countdest) = '\0';*/
	return (dest);
}
