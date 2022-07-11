#include "main.h"

/**
 * puts2 -> prints every other character of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	int n = strlen(str);

	for (i=0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
