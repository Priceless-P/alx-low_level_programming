#include "main.h"
#include <stdio.h>
/**
 * print_array -> prints n elements of an array of integers
 * @a: Array whose element(s) is to be printed
 * @n: element of element of array to be printed
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
else
{
printf(" ");
}
}
}
