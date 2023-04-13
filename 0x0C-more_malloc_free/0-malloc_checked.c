#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: pointer or 98 if fail malloc
 */

void *malloc_checked(unsigned int b)
{
	void *ptr =  malloc(b);
	
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
