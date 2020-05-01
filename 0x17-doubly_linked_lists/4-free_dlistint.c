#include "lists.h"
/**
 * free_dlistint - Function that free a doible linked list.
 * @head: Pointer to the head of the double linked list.
 * Return: Nothing it is a void function.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	dlistint_t *next;

	while (list != NULL)
	{
		next = list->next;
		free(list);
		list = next;
	}
}
