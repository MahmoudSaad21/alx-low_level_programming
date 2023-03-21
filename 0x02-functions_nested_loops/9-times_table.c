#include "main.h"
/**
 * times_table - return the last digit
 *
 * Return: return 0 or c or -c
 */
void times_table(void)
{
int count1, count2;
for (count1 = 0; count1 <= 9 ; count1++)
{
_putchar('0');
for (count2 = 0; count2 <= 9 ; count2++)
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
