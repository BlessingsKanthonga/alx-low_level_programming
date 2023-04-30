#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds node to linked list
 * @head: pointer to struct
 * @str: string to be copied
 * Return: addres of new element or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	unsigned int length = 0;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);

	while (str[count] != '\0')
	{
		length++;
		count++;
	}

	node->len = length;
	node->next = *head;
	*head = node;
	return (node);
}
