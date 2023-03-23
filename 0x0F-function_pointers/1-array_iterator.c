#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates f through the size first members of an array
 *
 * @array: array to iterate through
 * @size: number of elements in array
 * @action: action to iterate
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for ( ; i < size; i++)
		action(array[i]);
}
