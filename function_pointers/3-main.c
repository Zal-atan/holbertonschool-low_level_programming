#include "3-calc.h"

/**
 * main - Main function entry
 *
 * @argc: number of arguments supplied
 *
 * @argv: input numbers in an array
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num1, num2, outp;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	outp = func(num1, num2);
	printf("%d\n", outp);
	return (0);
}
