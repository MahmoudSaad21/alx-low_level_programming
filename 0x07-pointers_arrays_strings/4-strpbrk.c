#include "main.h"
/**
*_strpbrk - function locates the first occurrence in the string s
*of any of the bytes in the string accept
*@s:target
*@accept:byte
*Return: returns new value of target
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
return (s + i);
j++;
}
i++;
}
return ('\0');
}
