#include <stdlib.h>

/**
 * _calloc - imitates calloc fn
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory or NULL if not successful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *ptr2;
	unsigned int count;
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	ptr2 = (char *) ptr;

	for (count = 0; count <= (size * nmemb); count++)
		ptr2[count] = 0;
	return (ptr);
}
