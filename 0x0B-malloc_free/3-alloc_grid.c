#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*Return: pointer to new string in case of success
*/
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
array = (int **)malloc(height * sizeof(int *));
if (array == NULL)
{
free(array);
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = (int *)calloc(width, sizeof(int));
if (array[i] == NULL)
{
for (j = 0; j <= i; j++)
free(array[j]);
free(array);
return (NULL);
}
}
return (array);
}
