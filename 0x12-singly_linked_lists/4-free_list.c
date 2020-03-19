#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: head of the list.
 * Return: Nothing it is a void function :D
 */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}

	free(head->str);
	free(head);
}
