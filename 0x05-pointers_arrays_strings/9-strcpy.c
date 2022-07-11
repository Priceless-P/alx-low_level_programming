#include "main.h"

/**
 * _strcpy -> copies the string pointed to by src to buffer pointed to by dest
 * @dest: a buffer to copy the string to
 * @src: pointer to the string to be copied
 * Return: pointerto dest
 */

char *_strcpy(char *dest, char *src)
{
    char *tmp = dest;

while (*src)
*dest++ = *src++;

return (tmp);
}
