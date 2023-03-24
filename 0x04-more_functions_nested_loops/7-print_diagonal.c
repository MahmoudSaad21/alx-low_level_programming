#include "main.h"
/**
* print_diagonal - prints a straight line
*@n: a number
*Return: return nothing
*/
void print_diagonal(int n)
{
int count, count1;
if (n > 0)
{
for (count1 = 1; count1 <= n; count1++)
{
for (count = 1; count < count1; count++)
{
_putchar(32);
}
_putchar(92);
_putchar(10);
}
}
else
_putchar(10);
}
