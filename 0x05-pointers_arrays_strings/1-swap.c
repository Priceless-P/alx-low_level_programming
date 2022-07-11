#include "main.h"

/**
 * swap_int -> takes a pointer to an int as parameter and updates the value
 * @a: value to be swapped with b
 * @b: value to be swapped with a
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int z;

z = *a;
*a = z;
*b = z;
}
