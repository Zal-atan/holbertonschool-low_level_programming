#include "hash_tables.h"

/**
 * hash_table_get - gets a value from input key
 *
 * @ht: hash table to look in to
 *
 * @key: key to find the value
 *
 * Return: returns a pointer to the new hash table
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
