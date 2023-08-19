#include "lists.h"
/**
 * dlistint_len -This function returns
 * the number of elements in the dlistint_t list.
 * @h: the pointer to struct of the dlistint_t list.
 * Return: The amount of elements in dll
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
