#include "main.h"
/**
* print_line - prints a straight line
*@n: a number
*Return: return nothing
*/
void print_line(int n)
{
int count;
if (n > 0)
for (count = 0; count < n; count++)
_putchar('_');
_putchar(10);
}
