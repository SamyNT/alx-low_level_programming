#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - main function
 * Description:  function that creates an array
 * of chars, and initializes it with a specific char.
 *
 * @str: character used to initialize
 * Return: pointer to array if succes else NULL
 */

char *_strdup(char *str)
{
	char *new_str = NULL;

	if (str == NULL)
		return (NULL);
	new_str = (char *) malloc((strlen(str) + 1) * sizeof(char));
	if (new_str != NULL)
	{
		strcpy(new_str, str);
		return (new_str);
	}
	else if (new_str == NULL)
		return (NULL);

}
