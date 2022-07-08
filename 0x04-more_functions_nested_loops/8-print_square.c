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

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}