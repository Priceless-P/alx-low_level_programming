#include "main.h"

/**
 * times_table - prints the 9 times table
 * Description: THis function prints the 9 times table,starting with 0
 */

void times_table(void)
{
	int a = 9;
	int b = 0;

	while (b <= 9)
	{
		_putchar(a * b);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		b++;
	}
}
