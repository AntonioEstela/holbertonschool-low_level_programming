#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: element to print.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *list;

	list = (list_t *)h;

	for (; list != NULL; count++)
	{
		if (list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", list->len, list->str);
		}

		list = list->next;
	}
	return (count);
}
