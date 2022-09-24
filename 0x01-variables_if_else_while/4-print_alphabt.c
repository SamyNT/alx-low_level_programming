#include <stdio.h>
/**
 * main - the function prints the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 97 ; n <= 122 ; n++)
	{
		if (n != 101 && n != 113)
		putchar(n);
	}
	putchar ('\n');
	return (0);
}

