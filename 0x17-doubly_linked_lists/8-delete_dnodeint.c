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
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	for (i = 0; list != NULL; i++)
	{
		if (i == index)
		{
			if (list->prev)
				list->prev->next = list->next;
			if (list->next)
				list->next->prev = list->prev;
			if (*head == list)
				(*head) = list->next;
			free(list);
			return (1);
		}
		list = list->next;
	}
	return (-1);
}
