#include "main.h"

/**
 * _strcpy -> copies the string pointed to by src to buffer pointed to by dest
 * @dest: a buffer to copy the string to
 * @src: pointer to the string to be copied
 * Return: pointerto dest
 */

char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
}
