#include "main.h"

/**
 * print_line - Check description
 * Description: This function draws a straight line in the terminal
 * @n: Is the number of times the symbol "_" should be printed
 */
void print_line(int n)
{
int i;
for (i = 0; i< n; i++)
{
if (n <= 0)
{
_putchar('\n');
} 
_putchar('_');
}
_putchar('\n');
}
