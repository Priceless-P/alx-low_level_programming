#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Description: Print 10 times the alphabet in lowercase followed by a new line
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char j;

	for (j = 0; j < 10; j++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(i);
		_putchar('\n');
	}
}
