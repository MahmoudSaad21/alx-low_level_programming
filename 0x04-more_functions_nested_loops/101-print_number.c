#include "main.h"
/**
* print_number -  prints a number
* @num: is the number
* Return: void
*/
void print_number(int num)
{
int n = num;
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
