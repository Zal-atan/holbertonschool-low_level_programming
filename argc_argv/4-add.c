#include "main.h"

/**
 * main - adds all arguments given if they are numbers
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
	int i, j;
	long int x = 0;

	if (argc < 1)
	{
		printf("0");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}

	}
	for (i = 1; argv[i]; i++)
		x += atoi(argv[i]);
	printf("%ld\n", x);
	return (0);
}
