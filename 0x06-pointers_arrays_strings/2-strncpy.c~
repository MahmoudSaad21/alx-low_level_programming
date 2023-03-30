#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter
 *Return: returns new concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++] != '\0')
dest_len++;
for (index = 0; src[index] != '\0' && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
