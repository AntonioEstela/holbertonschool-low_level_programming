#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node at idx position.
 * @h: Pointer to the head of the double linked list.
 * @idx: is the index of the list where the new node should be added.
 * @n: number to add.
 * Return: NULL or the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *list = (*h);
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == '\0')
	{
		new->prev = NULL;
		new->next = (*h);
		(*h) = new;
		return (new);
	}

	while (list != NULL)
	{
		if (i == (idx - 1))
		{
			new->prev = list;
			new->next = list->next;
			list->next->prev = new;
			list->next = new;
			return (new);
		}
		list = list->next;
		i++;
	}
	return (NULL);
}
