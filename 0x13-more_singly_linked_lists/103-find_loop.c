#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list using the hare tortoise algo
 * @head: pointer to the head of the list
 * Return: address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		
		if (tortoise == hare)
		{
			tortoise = head;
			
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	
	return (NULL);
}
