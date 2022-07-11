#include "main.h"
/**
 * puts_half -> print the second half of the string
 * @str: string whose half to be printed
 */

void puts_half(char *str)
{
int i, len, len1, len2, n;

len = strlen(str);
len1 = len / 2;
if (len % 2 == 1)
{
len1 = len / 2 + 1;
}
for (i = len1; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
