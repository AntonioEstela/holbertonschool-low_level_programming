#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a DLL.
 * @h: pointer to the head of the double linked list.
 * Return: The number of nodes in the double linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *list;

	list = (dlistint_t *)h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		i++;
	}

	return (i);
}
