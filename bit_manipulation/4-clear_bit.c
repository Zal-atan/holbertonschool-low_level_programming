#include "main.h"


/**
 * clear_bit - sets value of specific bit to 0
 *
 * @n: input number
 *
 * @index: digit looking for
 *
 * Return: Returns 1 or 0 or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
