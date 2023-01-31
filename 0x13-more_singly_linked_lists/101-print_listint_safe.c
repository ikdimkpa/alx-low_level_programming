#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t, *h;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (NULL);
	t = head->next;
	h = (head->next).next;

	while (h != NULL)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}
			t = t->next;

			while (t != h)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}
