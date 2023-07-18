#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize dog structure
 * @d: a dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
