#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints all the elements of a list.
 * @h: The pointer to the head of the list_t list.
 * Return: returns the number of nodes in the list.
 *
**/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
