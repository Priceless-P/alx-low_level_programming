#include "main.h"

/**
 * more_numbers - Check description
 * Description:Prints 10 times the numbers from 0 to 14 followed by a new line
 */

void more_numbers(void)
{
	int a;
	int i;

	while (a <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)

				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		a++;
	}
	_putchar('\n');
}

