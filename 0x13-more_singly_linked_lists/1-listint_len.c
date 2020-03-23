#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: pointer to the head of the list.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *head;

	head = (listint_t *)h;

	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
