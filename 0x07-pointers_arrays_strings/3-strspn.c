#include "main.h"
/**
*_strspn - search the number of bytes in the initial
*segment of s which consist only of bytes from accept
*@s:target
*@accept:byte
*Return: returns new value of target
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j;
unsigned int n = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
n++;
break;
}
else if ((accept[i + 1]) == '\0')
return (bytes);
j++;
}
i++;
}
return (n);
}
