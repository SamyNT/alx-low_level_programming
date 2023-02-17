#include<stdio.h>
/**
 * main -  print all possible combinations of 2 digit numbers
 *
 * Return: Always zero (FOR succes)
 */

int main(void)
{
	int i, j;

	i = 48;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (j != 57 || i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
