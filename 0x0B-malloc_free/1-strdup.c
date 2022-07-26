#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @_strdup -  returns pointer to a new string which is a duplicate of str
 * 
 * @str: A string
 * Return: pointer to duplicated string on success, NULL if memory insufficient
 */
char *_strdup(char *str)
{
    char *n;

    if (str == NULL)
        return NULL;

    n = malloc(sizeof(char));

    
    return (n);
}