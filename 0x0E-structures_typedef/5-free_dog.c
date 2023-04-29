#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog d variables from meemory
 * @d: keeper of dog variables
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
