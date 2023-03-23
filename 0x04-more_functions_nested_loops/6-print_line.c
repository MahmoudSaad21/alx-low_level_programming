#include "main.h"
/**
* print_line - function that print numbers 10 times
*
*Return: return 0 everytime
*/
void print_line(int n)
{
int count ;
if (n > 0)
for (count = 0; count < n; count++)
_putchar('_');
_putchar(10);
}
