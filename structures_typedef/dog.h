#ifndef _main_h_
#define _main_h_

#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - structures containing characteristics of dog
 * @name: name of the dog
 * @age: age of the dog (in human years)
 * @owner: name of the owner
 * Description: Characteristics of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
