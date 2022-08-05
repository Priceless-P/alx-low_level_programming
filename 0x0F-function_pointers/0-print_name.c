#include "main.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: character to be printed.
 * @f: Function
 */

void print_name(char *name, void (*f)(char *))
{
    if (f != NULL)
    {
        f(name);
    }
}
