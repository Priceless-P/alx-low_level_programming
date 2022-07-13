#include "main.h"

/**
 * strcat - Concatenates the string including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated
 * @src: source string to be appended to @dest.
 *
 * Return: A pointer to the destination string
 */
char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}