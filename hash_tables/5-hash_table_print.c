#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 *
 * @ht: pointer to the hash table
 *
 * Return: None
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *printer;
	int commaMarker = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		printer = ht->array[i];
		for (; printer != NULL; printer = printer->next)
		{
			if (commaMarker == 1)
				printf(", ");
			printf("'%s': '%s'", printer->key, printer->value);
			commaMarker = 1;
		}
	}
	printf("}\n");
}
