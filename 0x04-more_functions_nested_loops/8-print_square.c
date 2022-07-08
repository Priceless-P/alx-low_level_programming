#include "main.h"

/**
* print_square - Check description
* Description: This function prints a square, followed by a new line
* @size: Value to be treated
*/

void print_square(int size)
{
int i;
int a;

if (size > 0)
{
	for (a = 0; a < size; a++)
	{
		for (i = 0; i < size; i++)
		{
		if (i == 0)
				_putchar('\n');
			_putchar('#');
		}
		_putchar('\n');
	}
}
_putchar('\n');
}
