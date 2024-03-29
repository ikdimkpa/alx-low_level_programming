#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the first node of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
