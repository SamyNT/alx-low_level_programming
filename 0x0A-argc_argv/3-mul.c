#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Prints number of input arguments
 *
 * @argc: nummber of arguments
 * @argv: pointer to arguments
 *
 * Return: always 0
 */
int main(int argc, char  __attribute__ ((unused)) *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi((argv[2])));
		return (0);
	}

	return (0);
}
