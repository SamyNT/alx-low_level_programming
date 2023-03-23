#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: pointer to name to print
 * @f: pointer to funtion that takes char as input and
 * returns nothing
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
