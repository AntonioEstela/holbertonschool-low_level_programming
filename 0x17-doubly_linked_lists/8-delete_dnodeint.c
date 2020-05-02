#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list = (*head);
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = list->next;
		free(list);
		return (1);
	}

	while (list)
	{
		if (i == (index - 1))
		{
			tmp = list->next;
			list->next = list->next->next;
			list->next->next->prev = list;
			free(tmp);
			return (1);
		}
		list = list->next;
		i++;
	}
	return (-1);
}
