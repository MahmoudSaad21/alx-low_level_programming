#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: smallest number in the array
*@max: lagrest value in the array
*Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
int *temp;
int index, index2 = 0;
if (min > max)
return (NULL);
temp = malloc(sizeof(*temp) * ((max - min) + 1));
if (temp == NULL)
return (NULL);
else
{
for (index = min; index <= max; index++)
{
temp[index2] = index;
index2++;
}
return (temp);
}
}
