#include "main.h"
/**
* print_triangle -  prints a square
*@s: a number
*Return: return nothing
*/
void print_triangle(int s)
{
int count, count1;
if (s > 0)
{
for (count1 = 1; count1 <= s; count1++)
{
for ((count = size - count1); count > 0; count--)
_putchar(' ');

for (count = 0; count < count1; count++)
_putchar('#');

if (count1 == s)
continue;

_putchar(10);
}
}
_putchar(10);
}
