#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings.
 *
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: pointer to a newly allocated space in memory and NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
int s1_size, s2_size, sum_size, i;
char *result;

if (s1 == NULL)
s1 = "\0";

if (s2 == NULL)
s2 = "\0";

s1_size = strlen(s1);
s2_size = strlen(s2);
sum_size = s1_size + s2_size;
result = malloc((sum_size) * sizeof(char) + 1);

if (result == 0)
return (0);
for (i = 0; i <= sum_size; i++)
{
if (i < s1_size)
result[i] = s1[i];
else
result[i] = s2[i - s1_size];
}
return (result);
}
