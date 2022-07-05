#include "main.h"

/**
 * _islower - Check description
 * Description: function that checks for lowercase character
 * @c: Input value
 * Return: 1 on success and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
