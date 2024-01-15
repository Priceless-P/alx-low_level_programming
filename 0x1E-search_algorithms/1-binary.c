#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array of
* integers using binary search
*
* @array: Array is a pointer to the first element of the array to search in
* @size: size of the array
* @value: value to be searched
* Return: Index of the value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;

	int high = size - 1;

	int i;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
