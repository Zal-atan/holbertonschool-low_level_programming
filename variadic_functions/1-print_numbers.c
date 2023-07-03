#include "variadic_functions.h"

/**
 * print_numbers - prints list of numbers serpeated by ", "
 *
 * @separator: what separates the numbers
 *
 * @n: numbers of given arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
