#include "hash_tables.h"

/**
 * hash_djb2 - Function implementing djb2 algorithm
 *
 * @str: string to generate into a hash value
 *
 * Return: returns a calculated hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int i;

	hash = 5381;
	while ((i = *str++))
		hash = ((hash << 5) + hash) + i; /* hash * 33 + i*/

	return (hash);
}
