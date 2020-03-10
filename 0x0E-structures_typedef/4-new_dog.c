#include "dog.h"
/**
 * _strlen - function that returns the length of a string..
 * @s: string
 * Return: the value of the variable count.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of dog's owner.
 * Return: the value of nd.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int i, j, k, l;
	int total_size_name, total_size_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	i = _strlen(name);
	j = _strlen(owner);
	total_size_name = i + 1;
	total_size_owner = j + 1;
	(*nd).name = malloc(sizeof(char) * total_size_name);
	if ((*nd).name == NULL)
	{
		free(nd);
		return (NULL);
	}
	for (k = 0; k < total_size_name; k++)
	{
		*((*nd).name + k) = *(name + k);
	}
	(*nd).age = age;
	(*nd).owner = malloc(sizeof(char) * total_size_owner);
	if ((*nd).owner == NULL)
	{
		free((*nd).name);
		free(nd);
		return (NULL);
	}
	for (l = 0; l < total_size_owner; l++)
	{
		*((*nd).owner + k) = *(owner + k);
	}
	return (nd);
}
