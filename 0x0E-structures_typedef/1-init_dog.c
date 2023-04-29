#include "dog.h"

/**
 * init_dog - initialises dog struct
 * @d: keeper of dog variables
 * @name: dog name
 * @age: of dog
 * @owner: of dog d
 * Return: void
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
