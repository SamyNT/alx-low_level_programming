#include "main.h"
/**
 * factors - finds number of factors of n
 * and veerify if they n^2 == base
 *
 * @n: number squared and compared to base
 * @start: number to star checking from
 * Return: sqrt(base) if integer. else -1
 */
int factors(int n, int start)
{
	if (start == n)
		return (1);
	else if (n % start == 0 || start < 2)
		return (0);
	else if (n > start)
		return (factors(n, start + 1));
	return (0);
}

/**
 * is_prime_number - main function
 * Description: checks if number is prime
 *
 * @n: entry number
 * Return: 1 is if isprime
 */

int is_prime_number(int n)
{
	return (factors(n, 2));
}
