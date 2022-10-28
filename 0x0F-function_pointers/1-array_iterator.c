#include "function_pointers.h"

/**
 * array_iterator - run a function given as a parameter array
 * element of an array.
 * @array: array of integer
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}