#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a DLL.
 * @head: Pointer to the head of the double linked list.
 * Return: The sum of all numbers of a double linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
