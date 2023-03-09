#include "main.h"
/**
 * check - verifies number from n to base
 * and veerify if they n^2 == base
 *
 * @n: number squared and compared to base
 * @base: numberto check
 *
 * Return: sqrt(base) if integer. else -1
 */
int check(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (check(n + 1, base));
}

/**
 * _sqrt_recursion - main function
 * Description: returns sqrt(n) if it is an integer
 *
 * @n: entry number
 * Return: sqrt(x) or -1
 */

int _sqrt_recursion(int n)
{
	return (check(1, n));
}
