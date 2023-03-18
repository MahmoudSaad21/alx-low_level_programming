#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Main function of my project
*
*
*Return: return 0 everytime
*/
int main(void)
{
int ch1, ch2;
for (ch1 = 0; ch1 <= 98; ch1++)
{
for (ch2 = ch1 + 1; ch2 <= 99; ch2++)
{
putchar((ch1 / 10) + '0');
putchar((ch1 % 10) + '0');
putchar(' ');
putchar((ch2 / 10) + '0');
putchar((ch2 % 10) + '0');
if (ch1 / 10 != 9 || ch1 % 10 != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
