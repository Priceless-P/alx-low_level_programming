#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new string which is a duplicate of str
 *
 * @str: A string
 * Return: pointer to duplicated string on success, NULL if memory insufficient
 */
char *_strdup(char *str)
{
int i, len = 0;
char *n;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
len++;
}
n = malloc(sizeof(char) * (len + 1));
if (n == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
n[i] = str[i];
}

return (n);
}
