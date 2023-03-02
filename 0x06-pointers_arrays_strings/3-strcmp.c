#include "main.h"
/**
 * _strcmp - main function
 *
 * Description: compares two strings
 *
 * @s1: First string to compare
 * @s2: Second string
 * Return: 0 if strings are equal
 *- Positive int if the ascii value of the last
 * tested digit of s1 is greater than that of s2
 * -Negative int if the ascii value of the last
 * tested digit of s1 is less than that of s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
