#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Function to create a new has table
 * @size: Size of the array to be allocated in the new hash
 * Return: Value of the new_hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	else
	{
		new_hash->size = size;
		new_hash->array = malloc(sizeof(hash_node_t *) * size);
		if (!new_hash->array)
		{
			free (new_hash);
			return (NULL);
		}
		return (new_hash);
	}
}