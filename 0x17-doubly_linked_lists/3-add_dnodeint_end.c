#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node at the end of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @n: number to add in the node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *list = (*head);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}

	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
	new->prev = list;

	return (new);
}
