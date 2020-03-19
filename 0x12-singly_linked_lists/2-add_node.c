#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list.
 * @str: element of the list.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (*(str + count) != '\0')
	{
		count++;
	}

	new_node->len = count;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
