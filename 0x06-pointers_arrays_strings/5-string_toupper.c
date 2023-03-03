#include "main.h"
/**
 * *string_toupper - main function
 *
 * Description: function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @str: string to be capitalized
 * Return: returns a pointer to the resulting string dest
 */
char *string_toupper(char *str)
{
	int str_count, i;

	str_count = 0;
	while (*(str + str_count) != '\0')
		str_count++;
	for (i = 0; i <= str_count - 1; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
