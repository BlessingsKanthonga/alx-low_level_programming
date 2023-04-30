#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024] = {NULL};
	
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		visited[count] = current;
		count++;

		if (contains(visited, count, current->next))
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}
	return (count);
}

/**
 * contains - checks if an array contains a given element
 * @array: pointer to the array
 * @size: size of the array
 * @elem: element to check for
 * Return: 1 if array contains elem, 0 otherwise
 */

int contains(const listint_t *array[], size_t size, const listint_t *elem)
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		if (array[i] == elem)
			return (1);
	}
	return (0);
}
