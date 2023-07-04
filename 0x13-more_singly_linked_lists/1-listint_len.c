#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This function returns the number of elements
 * in a linked  list.
 * @h: The pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
