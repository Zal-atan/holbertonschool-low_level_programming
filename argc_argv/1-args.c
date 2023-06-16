#include "main.h"

/**
 * main - prints the number of arguments given
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
	int i;

	for (i = 1; argv[i]; i++)
		;
	printf("%d\n", i - 1);
	return (0);
}
