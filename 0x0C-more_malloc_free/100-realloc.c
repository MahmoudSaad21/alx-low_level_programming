#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
*_realloc - reallocates a memory block
*@ptr: pointer to the memory previously allocated with a call to malloc
*@old_size: size of ptr
*@new_size: size of the new memory to be allocated
*Return: pointer to the address of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *temp;
unsigned int index;
if (ptr == NULL)
{
temp = malloc(new_size);
if (temp == NULL)
return (temp);
}
else if (new_size == old_size)
return (ptr);
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
temp = malloc(new_size);
if (temp != NULL)
return (NULL);
else
{
if (old_size < new_size)
{
for (index = 0; index < old_size; index++)
temp[index] = *((char *)ptr + index);
free(ptr);
return (temp);
}
else
{
for (index = 0; index < new_size; index++)
temp[index] = *((char *) ptr + index);
free(ptr);
return (temp);
}
}
}
return (temp);
}
