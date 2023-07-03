#include "function_pointers.h"

/**
 * print_name - This function prints a name
 *
 * @name: pointer to the name to print
 *
 * @f: function pointer to function with character pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	if (name == NULL)
		return;

	f(name);
}
