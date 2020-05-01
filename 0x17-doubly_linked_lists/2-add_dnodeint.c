#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @n: number to add in the node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
