#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen -> takes a pointer to an int as parameter and updates the value
 * @s: value to be updated
 * Return: 0 on success
 */

int _strlen(char *s)
{
int a = strlen(s);

printf("%d", a);
printf("\n");

return (0);
}
