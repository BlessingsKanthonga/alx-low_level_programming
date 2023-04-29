#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list of integers safely
 * @head: pointer to the beginning of the linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow;
	const listint_t *fast;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head->next;
	
	while ((fast != NULL) && (fast < slow))
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next;
		
		if ((fast != NULL) && (fast < slow))
		{
			fast = fast->next;
			count++;
		}
	}
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;
	
	return (count);
}
