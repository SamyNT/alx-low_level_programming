#include <stdio.h>
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
	printf("%d\n", argc - 1);
	return (0);
}
