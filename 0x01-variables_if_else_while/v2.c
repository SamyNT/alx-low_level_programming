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
					int ij10 = (i - 48) * 10 + (j - 48);

					int kl10 = (k - 48) * 10 + (l - 48);

					if (kl10 > ij10)
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
