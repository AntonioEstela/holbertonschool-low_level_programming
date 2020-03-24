#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head of the list.
 * Return: Nothing it is a void function :D
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
