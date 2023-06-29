#include "dog.h"

/**
 * free_dog - frees the memory of dog structure
 *
 * @d: address of previously initiated structure dog
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).name);
	free((*d).owner);
	free(d);

}
