#include "main.h"
/**
*_puts - length of stri
*@s: first string
*Return: nothing
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
