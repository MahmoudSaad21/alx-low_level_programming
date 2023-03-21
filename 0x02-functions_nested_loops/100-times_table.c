#include "main.h"
/**
 * print_times_table - return the last digit
 *@n:integer to start by
 * Return: return 0 or c or -c
 */
void print_times_table(int n)
{
int count1, count2;
if (n > 15 || n < 0)
return;
for (count1 = 0; count1 <= n ; count1++)
{
_putchar('0');
for (count2 = 1; count2 <= n ; count2++)
{
int temp = count1 * count2;
_putchar(',');
_putchar(' ');
if (temp <= 99)
_putchar(' ');
if (temp <= 9)
_putchar(' ');
if (temp >= 100)
{
_putchar((temp / 100) + '0');
_putchar((temp / 10) % 10 + '0');
}
else if (temp <= 99 && temp >= 10)
{
_putchar((temp / 10) + '0');
}
_putchar((temp % 10) + '0');
}
_putchar(10);
}
}
