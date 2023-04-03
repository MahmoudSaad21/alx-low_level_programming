#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: the array
*@b: string to complete with
*@n: the number
*Return: returns new concatenated string
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
*s[i] = b;
return (s);
}
