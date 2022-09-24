#include <stdio.h>
/**
 * main - the function prints the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 122 ; n >= 97 ; n--)
		putchar(n);
	putchar ('\n');
	return (0);
}

