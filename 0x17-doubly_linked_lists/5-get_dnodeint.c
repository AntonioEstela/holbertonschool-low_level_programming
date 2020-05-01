#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of a DLL.
 * @head: Pointer to the head of the double linked list.
 * @index: Is the index of the node, starting from 0.
 * Return: NULL if the node at index position doesn't exitst or the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
