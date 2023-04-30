#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the head of the list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current;
	listint_t*temp;
	
	if ((h == NULL) || (*h == NULL))
		return (0);
	current = *h;
	
	while (current != NULL)
	{
		count++;
		
		if ((void *)current <= (void *)current->next)
		{
			temp = current;
			current = current->next;
			*h = current;
			free(temp);
		}
		else
		{
			*h = NULL;
			break;
		}
	}
	return (count);
}
