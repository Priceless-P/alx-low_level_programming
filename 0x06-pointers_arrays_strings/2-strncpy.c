#include "main.h"

/**
 * _strncpy - Copies at most an inputted number of bytes from src to dest
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n:maximum number of bytes to copied from src.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
