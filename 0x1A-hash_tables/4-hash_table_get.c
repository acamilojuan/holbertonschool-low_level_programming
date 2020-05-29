#include "hash_tables.h"
/**
 * hash_table_get - Fx to retrieve a value associated to the key
 * @ht:  Pointer to the const hash table to be modified
 * @key: The key to be find and used
 * Return:  Retrieves the value or '\0'
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *ptr;

	if (ht == '\0' || key == '\0')
		return ('\0');
	idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return ('\0');
}
