#include "main.h"

/**
 * _isalpha - Check description
 * Description: This function that checks for alphabetic character
 * @c: Input value
 * Return: 1 on success and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
