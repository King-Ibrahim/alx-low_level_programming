#include "lists.h"

/**
 * add_nodeint - This function adds a new node to the
 * beginning of a linked list.
 * @head: The pointer to the address of the
 * head of the list.
 * @n: The integer for the new node to contain.
 * Return: returns the address of the new element.
 * 
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
