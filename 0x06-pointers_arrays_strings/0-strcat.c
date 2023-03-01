#include "main.h"
/**
 * *_strcat - concatenates two strings
 * Description: *_strcat appendds the src string to the the dest string
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds terminating null byte
 *
 * @dest: pointer to the string with adress dest, src will be appended here
 * @src: pointer to the sstring to be appended.
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int countdest, countsrc;

	countdest = countsrc = 0;
	while (*(dest + countdest) != 0)
		countdest++;
	while (*(src + countsrc) != 0)
	{
		*(dest + countdest) = *(src + countsrc);
		countdest++;
		countsrc++;
	}
	*(dest + countdest) = '\0';
	return (dest);
}
