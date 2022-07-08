#include "main.h"

/**
 * print_most_numbers - Check description
 * Description:Prints numbers from 0 to 9 except 2 & 4, followed by a new line.
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;
	}
	_putchar('\n');

}
