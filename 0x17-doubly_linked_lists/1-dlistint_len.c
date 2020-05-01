#include "lists.h"
/**
 * dlistint_len - Function that returns the number of nodes in a DLL.
 * @h: Pointer to the head of the double linked list.
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements;
	dlistint_t *list = (dlistint_t*)h;

	for (number_of_elements = 0; list != NULL; number_of_elements++)
	{
		list = list->next;
	}

	return (number_of_elements);
}
