#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Description: Prints 10 times the alphabet in lowercase followed by a new line
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i = 1;
	
	while (i <= 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(i);
		_putchar('\n');
	}
