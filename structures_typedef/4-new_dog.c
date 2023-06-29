#include "dog.h"

/**
 * new_dog - creates a new dog structure and saves  name and owner in sep var
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: returns a structure of dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lname = 0, lowner = 0;
	dog_t *doggo;

	doggo = malloc(sizeof(*doggo));
	if (doggo == NULL || !(name) || !(owner))
	{
		free(doggo);
		return (NULL);
	}

	for (; name[lname]; lname++)
		;

	for (; owner[lowner]; lowner++)
		;

	(*doggo).name = malloc(lname + 1);
	(*doggo).owner = malloc(lowner + 1);

	if ((*doggo).name == NULL || (*doggo).owner == NULL)
	{
		free((*doggo).name);
		free((*doggo).owner);
		free(doggo);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		(*doggo).name[i] = name[i];
	(*doggo).name[i] = '\0';

	(*doggo).age = age;

	for (i = 0; i < lowner; i++)
		(*doggo).owner[i] = owner[i];
	(*doggo).owner[i] = '\0';

	return (doggo);
}
