#include<stdio.h>
/**
 * main -  print all possible combinations of 2 digit numbers
 *
 * Return: Always zero (FOR succes)
 */

int main(void)
{
	int i, j, k, l;

	i = 48;
	j = 48;
	while (i <= 57)
	{
		while (j <= 57)
		{
			k = i;
			while (k <= 57)
			{
				l = j;
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
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
