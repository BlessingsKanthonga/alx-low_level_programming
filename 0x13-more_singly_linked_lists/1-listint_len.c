#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Prints # of  elements of a listint_t list
 * @h: Pointer to the head node of the list
 * Return: The number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = (h -> next);
		count++;
	}
	return (count);
}
