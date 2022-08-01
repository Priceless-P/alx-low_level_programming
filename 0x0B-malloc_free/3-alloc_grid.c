#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: 1 of the 2 dimensional array
 * @height: 1 of the 2 dimensional array
 * Return: a pointer to a 2 dimensional array of integers and NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **array, i, j;

array = malloc(sizeof(*array) * height);

if (width == 0 || height == 0 || array == 0)
return (NULL);

else
{
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(**array) * width);

if (array[i] == 0)
{
while (i--)
free(array[i]);
free(array);
return (NULL);
}

for (j = 0; j < width; j++)
array[i][j] = 0;
}

}
return (array);
}
