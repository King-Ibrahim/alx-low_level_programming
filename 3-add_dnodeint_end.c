#include "lists.h"
/**
 * add_dnodeint_end -This function adds a new node
 * at the end of dlistint_t list.
 * @head: the pointer to the direction of the head
 * @n: the data integer
 * Return: returns the direction of the tail node
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_dir;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last_dir = *head;

	while (last_dir->next != NULL)
		last_dir = last_dir->next;
	last_dir->next = new_node;
	new_node->prev = last_dir;

	return (new_node);
}
