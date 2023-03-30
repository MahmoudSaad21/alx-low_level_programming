#include "main.h"
/**
 *_strncay - copy two strings
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter
 *Return: returns new concatenated string
*/
char *_strncay(char *dest, char *src, int n)
{
int index = 0;
for (index = 0; src[index] != '\0' && index < n; index++)
dest[index] = src[index];
while (index < n)
{
dest[index] = '\0';
index++;
}
return (dest);
}
