#include<stdio.h>

/**
 * main - Prints all combinations of single digit numbers
 *
 * Return: Always zero
*/

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
