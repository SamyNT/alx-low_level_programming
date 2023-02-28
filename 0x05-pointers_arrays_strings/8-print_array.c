#include <stdio.h>
#include "main.h"
/**
 * print_array - main function
 * Description: prints n elements of an array
 *
 *@n: number of elements to be printed
 *@a: array to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');

}
