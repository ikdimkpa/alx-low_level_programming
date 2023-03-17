#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - A function that sums The elements in the list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data of list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *node;

	node = head;

	while (node)
	{
		int num = node->n;

		node = node->next;
		i += num;
	}
	return (i);
}
