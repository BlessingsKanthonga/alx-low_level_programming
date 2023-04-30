#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - prints number of elements
 * @h: struct
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			break;
		h = h->next;
		count++;
	}

	return (count);
}
