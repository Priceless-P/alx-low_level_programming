#include "function_pointers.h"
#include <stddef.h>
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
