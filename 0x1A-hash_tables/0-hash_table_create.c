#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table otherwhise returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	/* 	unsigned int i; */

	new_hash_table = malloc(sizeof(new_hash_table) * size);
	if (new_hash_table == NULL || !size)
		return (NULL);

	/* for (i = 0; i < size; i++)
	{
		new_hash_table[i];
	} */

	return (new_hash_table);
}
