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

typedef struct dog dog_t;
dog_t *new_dog(char *, float, char *);
void init_dog(struct dog *, char *, float, char *);
void free_dog(dog_t *d);
void print_dog(struct dog *d);

#endif /* DOG_H */
