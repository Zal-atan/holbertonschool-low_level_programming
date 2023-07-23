#include "hash_tables.h"

/**
 * key_index - Finds index for an input key
 *
 * @key: input we are searching table for
 *
 * @size: size of the array of hash table
 *
 * Return: returns an index to where the key is stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
