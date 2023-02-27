#include "main.h"
/**
 * swap_int - main function
 * Description: takes two ints and swaps their values
 *
 *
 *@a: input value to be swapped with b
 *@b: input value to be swapped with a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
