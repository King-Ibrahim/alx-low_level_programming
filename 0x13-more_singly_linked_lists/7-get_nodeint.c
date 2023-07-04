#include "lists.h"

/**
 * get_nodeint_at_index - This function locates a node of
 * a linked list.
 * @head: The pointer to the head of the list.
 * @index: The index of the node
 * Return: returns the located node
 * returns NULL if the node doesn't exist
 *
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
