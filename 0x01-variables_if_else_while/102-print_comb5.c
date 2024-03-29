#include<stdio.h>
/**
 * main -  print all possible combinations of 2 digit numbers
 * I want the numbers to be printed as ij kl
 * Return: Always zero (FOR succes)
 */

int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				l = 48;
				while (l <= 57)
				{

					int kl10 = (k - 48) * 10 + (l - 48);

					int ij10 = (i - 48) * 10 + (j - 48);

					int cond = i != 57 || j != 56 || k != 57 || l != 5;

					if (kl10 > ij10 && cond)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
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
