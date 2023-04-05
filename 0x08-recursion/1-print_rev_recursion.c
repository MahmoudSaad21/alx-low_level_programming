#include "main.h"
/**
*_print_rev_recursion - prints a string
*@s:target
*Return:
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(s[-1]);
_print_rev_recursion(s - 1);
}
}
