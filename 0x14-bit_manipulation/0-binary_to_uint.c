#include "lists.h"
/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: pointer to a string of 0 and 1 characters
*Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
num <<= 1;
if (b[i] == '1')
num += 1;
}
return (num);
}
