#include <stdio.h>
/**
 * main - the function prints the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
		putchar(n);
	for (n = 97 ; n <= 102 ; n++)
		putchar(n);
	putchar ('\n');
	return (0);
}

