#include "variadic_functions.h"

/**
 * print_c - prints a character
 *
 * @args: current argument input into function
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - prints an integer
 *
 * @args: current argument input into function
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - prints a floating number
 *
 * @args: current argument input into function
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - prints a string
 *
 * @args: current argument input into function
 */
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints any given argument
 *
 * @format: type of argument
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *sep = "";
	types_t arr[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j].type != '\0')
		{
			if (format[i] == arr[j].type)
			{
				printf("%s", sep);
				arr[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
