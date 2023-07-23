#include "hash_tables.h"

/**
 * hash_table_create - creates a hash tables
 *
 * @size: size of the array
 *
 * Return: returns a pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *htable;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);

	if (htable->array == NULL)
		return (NULL);

	while (i < size)
	{
		htable->array[i] = NULL;
		i++;
	}

	return (htable);
}
