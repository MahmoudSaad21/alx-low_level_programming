#include "main.h"
/**
 *_strcat - concatenates  two strings 
 *@dest: String that will be appended
 *@src: String to be concatenated 
 *
 * Return: returns poiner to dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++
}
while (src[index] != '\0')
{
dest[dest_len + index] = src[i];
index++;
}
dest[dest_len + index] = '\0';
return (dest);
}
