#include "main.h"
/**
 * puts_half - main function
 * Description: prints second half of a string
 *
 *
 *@str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int count, middle, i;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
		middle = count / 2;
	else
		middle = count / 2 + 1;
	for (i = middle; i <= count - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
