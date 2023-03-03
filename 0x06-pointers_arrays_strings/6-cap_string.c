#include "main.h"
/**
 * *cap_string - main function
 *
 * Description: function that changes all lowercase letters
 * found after a particular separator of a string to uppercase.
 *
 * @str: string to be capitalized
 * Return: returns a pointer to the resulting string dest
 */
char *cap_string(char *str)
{
	int str_count, i;

	str_count = 0;
	while (*(str + str_count) != '\0')
		str_count++;
	for (i = 0; i <= str_count - 1; i++)
	{
		if (i == 0 && (str[i] <= 122 && str[i] >= 97))
			str[i] = str[i] - 32;
		if  ((str[i] == '\t' || str[i] == ' ' ||
		str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
		str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' ||
		str[i] == '{' || str[i] == '}') && (str[i + 1] >= 97
		&& str[i + 1] <= 122))
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
