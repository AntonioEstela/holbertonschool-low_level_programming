#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *head;

	head = (listint_t *)h;

	while (head != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
