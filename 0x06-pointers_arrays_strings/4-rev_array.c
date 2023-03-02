#include "main.h"
/**
 * reverse_array - main function
 *
 * Description: reverses an array
 *
 * @a: array to reverse
 * @n: number of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	for (i = 0; i < (n - 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
