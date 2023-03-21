#include "main.h"
/**
 * jack_bauer - return the last digit
 *
 * Return: return 0 or c or -c
 */
void jack_bauer(void)
{
int count1,count2,count3,count4;
for (count1 = 0; count1 <=2; count1++)
{
for (count2 = 0; count2 <=9; count2++)
{
_putchar(count1 + 48);
_putchar(count2 + 48);
_putchar(58);
for (count3 = 0; count3 <=5; count3++)
{
for (count4 = 0; count4 <=9; count4++)
{
_putchar(count3 + 48);
_putchar(count4 + 48);
_putchar(10);
}
}
}
}
}
