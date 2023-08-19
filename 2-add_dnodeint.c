#include "lists.h"
/**
 * add_dnodeint- This function Inserts a new node
 *  at the beginnig of the dlistint_t list.
 * @head: the pointer to the direction of the head
 * @n: The data integer
 * Return: returns the address of the new new node
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
