#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * Description:Prints all natural numbers from n to 98, followed by a new line
 * @n: Input value
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		_putchar(i);
	_putchar('\n');
}
