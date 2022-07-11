#include "main.h"

/**
 * rev_string -> that reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	char string;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
		len++;

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		string = s[i];
		s[i] = s[len1];
		s[len1--] = string;
	}
}
