#include "main.h"

/**
 * rev_string -> that reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	char string;
	int i, len;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		string = s[i];
		s[i++] = s[len];
		s[len] = string;
	}
}
