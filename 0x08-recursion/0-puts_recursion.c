#include "main.h"
/**
*_puts_recursion - prints a string
*@s:target
*Return:
*/
void _puts_recursion(char *s)
{
int i = 0;
if(*s == '\0')
_putchar('\n')
else
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
}
