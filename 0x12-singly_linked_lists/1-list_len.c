#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: elements in the list.
 * Return: the number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *list;

	list = (list_t *)h;

	for (; list != NULL; count++)
	{
		list = list->next;
	}
	return (count);
}
