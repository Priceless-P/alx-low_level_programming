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

void print_square(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
