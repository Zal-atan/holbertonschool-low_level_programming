#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * swap_int - Swaps pointer values
 *
 * @a: pointer a
 * @b: pointer b
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
