#include "main.h"
/**
 *_strncpy - copy two strings
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter
 *Return: returns new concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0; src[index] != '\0' && index < n; index++)
dest[index] = src[index];
while (index < n)
{
dest[index] = '\0';
index++;
}
return (dest);
}
