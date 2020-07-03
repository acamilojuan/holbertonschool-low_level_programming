#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int aux, size, counter = 0;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		for (aux = 0; aux < size; aux++)
		{
			while (ht->array[aux] != NULL)
			{
				if (counter > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[aux]->key, ht->array[aux]->value);
				counter++;
				ht->array[aux] = ht->array[aux]->next;

			}
		}
		printf("}\n");
	}
}
