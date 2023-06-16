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


int main(int argc, char **argv)
{
	long int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%ld\n", (i * j));
	return (0);
}
