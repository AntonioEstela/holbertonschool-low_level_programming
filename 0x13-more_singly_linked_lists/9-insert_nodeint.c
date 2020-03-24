#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node at a nth position
 * @head: Pointer to the head of the list.
 * @idx: Is the index of the list where the new node should be added.
 * @n: Number to insert inside the node.
 * Return: The new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == '\0')
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current; i++)
	{
		if (i == (idx - 1))
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}

	free(new_node);
	return (NULL);
}
