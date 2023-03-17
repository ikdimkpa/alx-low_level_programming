#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node;
	unsigned int i = 0;

	node = *h;
	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
		return (NULL);

	while (i <= idx)
	{
		node = node->next;
		i++;
	}
	node->next = new_node;
	new_node->prev = node;
	new_node->next = node->next->next;
	new_node->n = n;

	return (new_node);
}
