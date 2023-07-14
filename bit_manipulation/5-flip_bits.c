#include "main.h"


/**
 * flip_bits - returns number of bits needed to change to switch values
 *
 * @n: input number
 *
 * @m: end number looking for
 *
 * Return: Returns number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare = n ^ m;
	unsigned int sum = 0;

	for (; compare > 0;)
	{
		sum += (compare & 1);
		compare >>= 1;
	}

	return (sum);
}

