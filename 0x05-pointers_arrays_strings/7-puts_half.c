#include "main.h"
/**
*puts_half -  prints every other character of a string
*@s: first string
*Return: nothing
*/
void puts_half(char *s)
{
int len = 0, count = 0;
while (s[len] != '\0')
len++;
for (count = len/2; count < len; count++)
_putchar(s[count]);
_putchar(10);
}
