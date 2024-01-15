#include "search_algos.h"

/**
* linear_search - Searches for a value in a sorted array of
* integers using linear search
*
* @array: Array is a pointer to the first element of the array to search in
* @size: size of the array
* @value: value to be searched
* Return: Index of the value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		{
		if (array[i] == value)
			return (i);
		}
	}
	}
	return (-1);
}
