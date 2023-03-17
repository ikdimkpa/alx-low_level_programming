#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointerto the head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int count = 0;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
