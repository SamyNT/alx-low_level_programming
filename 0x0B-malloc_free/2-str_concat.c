#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - main function
 * Description:  function that concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to array if succes else NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	new_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str != NULL)
	{
		strcpy(new_str, s1);
		strcpy(new_str, s2);
		return (new_str);
	}
	return (NULL);
}
