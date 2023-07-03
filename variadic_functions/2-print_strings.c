#include "variadic_functions.h"

/**
 * print_strings - prints list of numbers serpeated by given separator
 *
 * @separator: what separates the numbers
 *
 * @n: numbers of given arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i == n - 1)
			break;
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
