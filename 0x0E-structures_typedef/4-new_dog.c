#include "dog.h"
/**
 * _strcpy - function that copies the string scr to dest
 * @dest: character
 * @src: character
 * Return: empty
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	for (; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
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
	int i, j;
	int total_size_name, total_size_owner;
	char *cop_name, *cop_owner;

	i = _strlen(name);
	j = _strlen(owner);
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	total_size_name = i + 1;
	total_size_owner = j + 1;
	cop_name = malloc(sizeof(char) * total_size_name);
	if (cop_name == NULL)
	{
		return (NULL);
	}
	cop_owner = malloc(sizeof(char) * total_size_owner);
	if (cop_owner == NULL)
	{
		free(cop_name);
		return (NULL);
	}
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(cop_name);
		free(cop_owner);
		return (NULL);
	}
	_strcpy(cop_name, name);
	_strcpy(cop_owner, owner);

	(*nd).name = name;
	(*nd).age = age;
	(*nd).owner = owner;
	return (nd);
}
