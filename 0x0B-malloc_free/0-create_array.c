#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * create_array - main function
 * Description:  function that creates an array
 * of chars, and initializes it with a specific char.
 *
 * @size: Size of array to be created
 * @c: character used to initialize
 * Return: pointer to array if succes else NULL
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	i = 0;
	array = (char*) malloc(size * sizeof(char));

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);

}
