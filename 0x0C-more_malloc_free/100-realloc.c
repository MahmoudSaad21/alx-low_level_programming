#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
* Return: pointer to the address of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *temp;
unsigned int index;
if (ptr == NULL)
{
temp = malloc(new_size);
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
for (index = 0; i < min(old_size, new_size); i++)
*((char *)temp + index) = *((char *) ptr + index);
free(ptr);
return (temp);
}
}
}
