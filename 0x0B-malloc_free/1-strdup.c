#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*Return:pointer
*/
char *_strdup(char *str)
{
char *array;
int i, len;
for (i = 0; str[i]; i++)
len++;
array = malloc(sizeof(char) * (len + 1));
if (str == NULL || array == NULL)
return (NULL);
for (i = 0; str[i]; i++)
array[i] = str[i];
array[len] = '\0';
return (array);
}
