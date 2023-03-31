#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @str: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *str)
{
int i;
char c;
char *result = str;
for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
if (c >= 'a' && c <= 'z') 
c = 'a' + ((c - 'a' + 13) % 26);
else if (c >= 'A' && c <= 'Z')
c = 'A' + ((c - 'A' + 13) % 26);
result[i] = c;
}
return (result);
}
