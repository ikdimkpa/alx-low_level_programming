#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
