#include <stdlib.h>
#include "dog.h"

/**
 * dog_t new_dog - defines new dog
 * @name: of new dog
 * @age: of dog
 * @owner: of new dog
 * Return: NULL if fn fails, else 0;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int count = 0;
	int count2 = 0;

	dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	while (name[count] != '\0')
		count++;
	while (owner[count2] != '\0')
		count2++;

	new_dog -> name = (char *) malloc(count + 1);

	if (new_dog -> name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog -> name = name;

	new_dog -> owner = (char *) malloc(count2 + 1);

	if (new_dog -> owner == NULL)
	{
		free(new_dog -> name);
		free(new_dog);
		return (NULL);
	}
	new_dog -> owner = owner;
	new_dog -> age = age;

	return (new_dog);
}
