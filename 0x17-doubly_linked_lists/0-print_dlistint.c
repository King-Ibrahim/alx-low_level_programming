#include "lists.h"

/**
 * print_dlistint - This function prints all
 *  the elements of the dlistint_t list.
 * @h:  the pointer to node structure
 * Return: returns the amount of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
