#include "main.h"
/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return: number
*/
int _strcmp(char *s1, char *s2)
{
int index = 0, d = 0;
while (1)
{
if (s1[index] == '\0' && s2[index] == '\0')
break;
else if (s1[index] == '\0')
{
d = s2[index];
break;
}
else if (s2[index] == '\0')
{
d = s1[index];
break;
}
else if (s1[index] != s2[index])
{
d = s1[index] - s2[index];
break;
}
else
index++;
}
return (d);
}
