#include "main.h"

/**
 * main - multiplies two arguments
 *
 * @argc: number of arguments given
 *
 * @argv: array of attributes given
 *
 * Return: Always 0.
 *
 */


int main(__attribute__ ((unused))int argc, char **argv)
{
	long int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%ld\n", (i * j));
	return (0);
}
