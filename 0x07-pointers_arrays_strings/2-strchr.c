#include "main.h"
/**
*_strchr - copy the constant byte
*@s:target
*@c:constant byte
*Return: returns new value of target
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (s + i);
i++;
}
if (s[i] == c)
return (s + i);
return (NULL);
}
