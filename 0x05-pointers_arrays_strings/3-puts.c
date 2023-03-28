#include "main.h"
/**
*_puts - length of string
*@s: first string
*Return: nothing
*/
void _puts(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
_putchar(s[len]);
}
_putchar(10);
}
