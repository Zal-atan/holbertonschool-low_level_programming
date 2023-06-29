#include "dog.h"

/**
 * init_dog - Function that initiates data structure "dog"
 *
 * @d: address of previously initiated structure dog
 *
 * @name: name of dog to add to structure
 *
 * @age: age of dog to add to struct
 *
 * @owner: name of owner to add to struct
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
