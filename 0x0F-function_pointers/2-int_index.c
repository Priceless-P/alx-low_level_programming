#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @size: number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: index of the first element
 * If no element matches, return -1
 * If size <= 0, return -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 1 || array != NULL || cmp != NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
