#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints the dog structure
 *
 * @d: structure to be printed
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)"));
		d->age ? (printf("Age: %.6f\n", d->age)) : (printf("Age: (nil)"));
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)"));
	}

}
