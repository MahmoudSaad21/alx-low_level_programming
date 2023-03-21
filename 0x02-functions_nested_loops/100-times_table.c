#include "main.h"
/**
 * print_times_table - return the last digit
 *@n:integer to start by
 * Return: return 0 or c or -c
 */
void print_times_table(int n)
{
int count1, count2;
for (count1 = 0; count1 <= n ; count1++)
{
_putchar('0');
for (count2 = 1; count2 <= n ; count2++)
{
int temp = count1 * count2;
_putchar(',');
_putchar(' ');
if (temp <= 9)
_putchar(' ');
else
_putchar((temp / 10) + '0');
_putchar((temp % 10) + '0');
}
_putchar(10);
}
}
