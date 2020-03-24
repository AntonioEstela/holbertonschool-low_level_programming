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


	if (*head == NULL)
	{
		return (0);
	}

	node_data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);
	return (node_data);
}
