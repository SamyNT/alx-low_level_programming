#include "main.h"
/**
 * *leet - main function
 *
 * Description: function that encode a string to 1337
 *
 * @str: string to be encoded
 * Return: returns a pointer to the resulting string str
 */
char *leet(char *str)
{
	int str_count, i, j;
	char leetN[] = "4433007711";
	char leetL[] = "aAeEoOtTlL";

	str_count = 0;
	while (*(str + str_count) != '\0')
		str_count++;
	for (i = 0; i <= str_count - 1; i++)
	{
		for  (j = 0; j <= 9; j++)
		{
			if (str[i] == leetL[j])
				str[i] = leetN[j];
		}
	}
	return (str);
}
