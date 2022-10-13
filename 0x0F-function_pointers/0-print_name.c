#include "function_pointers.h"

/**
 * print_name - prints a name using the function
 * @name: string
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
	f(name);
}

