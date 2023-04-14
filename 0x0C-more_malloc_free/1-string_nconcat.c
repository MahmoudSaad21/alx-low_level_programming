#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*Return: a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, con_len = 0, index;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (index = 0; s1[index]; index++)
len++;
concat = malloc(sizeof(char) * (len + 1));
if (concat == NULL)
return (NULL);
for (index = 0; s1[index]; index++)
concat[con_len++] = s1[index];
for (index = 0; s2[index] && index < n; index++)
concat[con_len++] = s2[index];
concat[con_len] = '\0';
return (concat);
}
