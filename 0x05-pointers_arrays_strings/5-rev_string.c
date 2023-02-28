#include "main.h"
/**
 * rev_string - main function
 * Description: reverses a string
 *
 *
 *@s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int count, i;
	char temp;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + count - 1 - i);
		*(s + count - 1 - i) = temp;
	}
}
