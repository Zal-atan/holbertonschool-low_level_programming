#include "main.h"

/**
 * main - prints every argument given
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

	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);
	return (0);
}
