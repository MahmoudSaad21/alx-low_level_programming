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
int ch1, ch2, ch3;
for (ch1 = '0'; ch1 <= '9'; ch1++)
{
for (ch2 = '0'; ch2 <= '9'; ch2++)
{
for (ch3 = '0'; ch3 <= '9'; ch3++)
{
if (ch1 < ch2 && ch2 < ch3)
{
putchar(ch1);
putchar(ch2);
putchar(ch3);
if (ch1 != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
