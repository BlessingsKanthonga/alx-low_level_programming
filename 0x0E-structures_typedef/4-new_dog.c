#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog instance
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: instance of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = 0;
	int owner_length = 0;
	int i;
	dog_t *new_dog;

	while (name[name_length] != '\0')
		name_length++;

	while (owner[owner_length] != '\0')
		owner_length++;

	new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	(new_dog->name) = (char *) malloc(sizeof(char) * (name_length + 1));

	if ((new_dog->name) == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		(new_dog->name[i]) = name[i];
	(new_dog->age) = age;
	(new_dog->owner) = (char *) malloc(sizeof(char) * (owner_length + 1));

	if ((new_dog->owner) == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
		(new_dog->owner[i]) = owner[i];
	return (new_dog);
}
