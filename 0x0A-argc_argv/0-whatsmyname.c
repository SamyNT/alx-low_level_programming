#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Prints it's name.
 *
 * @argc: nummber of arguments
 * @argv: pointer to arguments
 *
 * Return: always 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
