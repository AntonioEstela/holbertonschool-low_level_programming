#include "lists.h"
/**
 * dlistint_len - Function that returns the number of nodes in a DLL.
 * @h: Pointer to the head of the double linked list.
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements;
	dlistint_t *list = (dlistint_t *)h;

	for (number_of_elements = 0; list != NULL; number_of_elements++)
	{
		list = list->next;
	}

	return (number_of_elements);
}
/**
 * insert_dnodeint_at_index - Function that inserts a new node at idx position.
 * @h: Pointer to the head of the double linked list.
 * @idx: is the index of the list where the new node should be added.
 * @n: number to add.
 * Return: NULL or the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list = (*h);
	dlistint_t *new = NULL;
	size_t len = dlistint_len(*h);
	unsigned int i = 0;

	if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (list != NULL)
	{
		if (i == (idx - 1) && list->next != NULL)
		{
			new->n = n;
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
