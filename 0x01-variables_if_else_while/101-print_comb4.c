#include<stdio.h>
/**
 * main -  print all possible combinations of 2 digit numbers
 *
 * Return: Always zero (FOR succes)
 */

int main(void)
{
	int i, j, k;

	i = 48;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
