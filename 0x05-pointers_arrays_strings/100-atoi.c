#include "main.h"
#include <string.h>

/**
* _atoi - Converts a string to an integer.
* @s: String to be converted.
*
* Return: Integer value of the converted string.
*/

int _atoi(char *s)
{
int sign = 1;
int count =0;
do
{
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
count = (count * 10) + (*s - '0');
	
else if (count > 0)
break;
}
while (*s++);

return (count * sign);
}
