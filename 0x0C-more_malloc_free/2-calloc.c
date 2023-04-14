#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
*_calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *temp;
unsigned int index;
if (nmemb == 0 || size == 0)
return (NULL);
temp = malloc(nmemb * size);
if (temp == NULL)
return (NULL);
else
{
for (index = 0; index < (nmemb * size); index++
temp[index] = 0;
return (temp);
}
}
