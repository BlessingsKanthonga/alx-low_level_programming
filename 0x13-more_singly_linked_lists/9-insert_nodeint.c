#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value of the integer element in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int check = 1;
	unsigned int i;
	listint_t *new_node;
	listint_t *current;

	current = *head;

	if ((*head == NULL) || (n == NULL))
		return (NULL);
	if (idx == 0)
		return (add_nodeint_end(head, n));
	else if (idx >= check)
	{
		for (i = 0; ((i < (idx - 1)) && (current != NULL)); i++)
			current = current->next;

		if (current == NULL)
			return (NULL);
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = current->next;
		current->next = new_node;
	}
	else
		return (NULL);
	return (new_node);
}
