#include "main.h"

/**
* print_triangle - Check description
* Description: This function prints a triangle, followed by a new line
* @size: Value to be treated
*/

void print_triangle(int size)
{
int a;
int b;
int n = size - 1;
if (size > 0)
{
for (a = 0; a < size; a++)
{ 
for (b = 0; b < size; b++)
{
  if(b < n)
      _putchar(' ');
  else
      _putchar('#');
}
n--;
_putchar('\n');
}
}
else
_putchar('\n');
}