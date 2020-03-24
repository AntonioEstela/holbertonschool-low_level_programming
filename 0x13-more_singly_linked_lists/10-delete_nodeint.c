#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the given node of a linklist
 * @head: pointer to the head of a linked list.
 * @index: number of node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *connect;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < (index - 1); i++)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}

	connect = tmp->next->next;
	free(tmp->next);
	tmp->next = connect;
	return (1);
}
