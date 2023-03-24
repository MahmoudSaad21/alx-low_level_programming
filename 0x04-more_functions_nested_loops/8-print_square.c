#include "main.h"
/**
* print_square -  prints a square
*@s: a number
*Return: return nothing
*/
void print_square(int s)
{
int count, count1;
if (s > 0)
{
for (count1 = 1; count1 <= s; count1++)
{
for (count = s; count <= count1; count++)
{
_putchar(35);
}
_putchar(10);
}
}
else
_putchar(10);
}
