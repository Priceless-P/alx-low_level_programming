#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - eecutes a function given as a parameter on each
 * element of an array.
 * @size: Size of array
 * @array: Array of integer
 * @action: Function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
