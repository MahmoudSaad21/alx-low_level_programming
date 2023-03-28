#include "main.h"
/**
*_puts2 -  prints every other character of a string
*@s: first string
*Return: nothing
*/
void _puts2(char *s)
{
int len = 0;
while (s[len] != '\0')
{
_putchar(s[len]);
len++;
}
_putchar(10);
}
