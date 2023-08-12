#include "hash_tables.h"

/**
 * key_index - Computes the index of a key.
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Reserve(Declare) and initialize memory to contain index */
	unsigned long int index = hash_djb2(key) % size;
	
	/* Return the memory location of index */
	return (index);
}
