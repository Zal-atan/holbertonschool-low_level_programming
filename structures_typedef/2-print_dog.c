#include "dog.h"

/**
 * print_dog - prints the dog structure
 *
 * @d: address of previously initiated structure dog
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
