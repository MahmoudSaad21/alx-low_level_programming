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
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if (ch != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
