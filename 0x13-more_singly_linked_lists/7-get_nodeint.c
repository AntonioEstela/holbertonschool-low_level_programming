#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Is the index of the node, starting at 0.
 * Return: NULL if head is empty or the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	node = head->next;

	return (node);
}
