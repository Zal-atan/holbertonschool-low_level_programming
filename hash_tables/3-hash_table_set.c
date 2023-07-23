#include "hash_tables.h"

/**
 * hash_table_set - adds elements to a hash table
 *
 * @ht : hash table to add to
 *
 * @key: key for value
 *
 * @value: string to which key points
 *
 * Return: 1 if successful, else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy;
	unsigned long int i, index;
	hash_node_t *newNode;

	if (value == NULL || key == NULL || *key == '\0' || ht == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(copy);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = copy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
