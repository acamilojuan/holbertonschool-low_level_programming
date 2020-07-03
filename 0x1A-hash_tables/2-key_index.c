#include "hash_tables.h"
/**
 * key_index - Fx to return the idx of a key in a hash table
 * @key: input string with the data of the key to be found
 * @size: Size of the array of the hash table
 * Return: Idx (position) of the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
