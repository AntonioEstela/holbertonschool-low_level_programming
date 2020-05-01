#include "lists.h"
/**
 * 
 * 
 * 
 * 
 * 
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
		if (i == (idx -1))
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
