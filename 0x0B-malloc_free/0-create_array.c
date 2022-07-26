#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create a array chars and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character to be initalized to
 * Return: pointer to array on success and NULL on failure
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *n;

if (size == 0)
{
return NULL;
}
n = malloc(sizeof(char)* size);

if (n == NULL)
return NULL;

for (i = 0; i < size; i++)
{
n[i] = c;
}
return (n);
}