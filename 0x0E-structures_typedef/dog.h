#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *(char *, float, char *);
void free_dog(dog_t *);

#endif /* DOG_H */
