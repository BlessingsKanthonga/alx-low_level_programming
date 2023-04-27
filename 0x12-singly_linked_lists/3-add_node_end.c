#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at list end
 * @head: struct
 * @str: copied string
 * Return: address of new element or null if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	unsigned int length = 0;
	list_t *last = *head;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}
	node -> str = strdup(str);
	node -> next = NULL;
	while (str[count] != '\0')
	{
		length++;
		count++;
	}
	node -> len = length;

	if ((*head) == NULL)
		(*head) = node;
	else
	{
		while ((last) -> next != NULL)
		{
			last = last -> next;
		}
		last -> next = node;
	}
	return (node);
}
