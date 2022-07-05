#include "main.h"

/**
 * print_last_digit - Check description
 * Description: function that prints the last digit of a number
 * @a: Input Value
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (b < 0)
	{
		b *= -1;
	}
	_putchar(b + '0');
	return (b);
}
