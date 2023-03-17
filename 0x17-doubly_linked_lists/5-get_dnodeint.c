#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a linked list
 * @head: pointer to the head of the list
 * @index: index of the nth node of the list
 *
 * Return: nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			break;
		head = head->next;
		++n;
	}

	return (head);
}
