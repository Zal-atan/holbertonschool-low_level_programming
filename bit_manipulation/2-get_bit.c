#include "main.h"


/**
 * get_bit - gets value of the bit at specific place
 *
 * @n: input number
 *
 * @index: digit looking for
 *
 * Return: Returns 1 or 0 or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = n >> index;

	return (x & 1);
}
