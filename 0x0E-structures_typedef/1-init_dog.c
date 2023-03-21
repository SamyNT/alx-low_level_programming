#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a dog structure
 * @d: input structure
 * @name: name
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
