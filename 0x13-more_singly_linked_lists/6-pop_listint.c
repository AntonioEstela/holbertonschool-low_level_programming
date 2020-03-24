#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	node_data = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (node_data);
}
