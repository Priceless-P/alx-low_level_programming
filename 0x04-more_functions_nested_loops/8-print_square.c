#include "main.h"

/**
* print_square - Check description
* Description: This function prints a square, followed by a new line
* @size: Value to be treated
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
