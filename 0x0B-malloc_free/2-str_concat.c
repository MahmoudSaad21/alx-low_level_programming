#include "main.h"
#include <stdlib.h>
/**
*str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*Return: pointer to new string in case of success
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int i, index = 0,  len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
len++;
for (i = 0; s2[i]; i++)
len++;
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
str[index++] = s1[i];
for (i = 0; s2[i]; i++)
str[index++] = s2[i];
return (str);
}
