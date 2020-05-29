#include "hash_tables.h"
/**
 * hash_table_set - Fx to add an element to a hash table
 * @ht:  Pointer to the hash table to be modified
 * @key: The key to be used
 * @value: Value of the key that is going to be added
 * Return: 0 if failure, 1 if succeded
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *ptr, *nnode;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			if (ptr->value)
				free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
		ptr = ptr->next;
	}
	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (0);
	nnode->key = strdup(key);
	if (nnode->key == NULL)
	{
		free(nnode);
		return (0);
	}
	nnode->value = strdup(value);
	if (nnode->value == NULL)
	{
		free(nnode->key);
		free(nnode);
		return (0);
	}
	nnode->next = ht->array[idx];
	ht->array[idx] = nnode;
	return (1);
}
