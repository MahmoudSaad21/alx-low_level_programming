#include "main.h"
/**
*print_binary - prints the binary representation of a number
*@n: unsigned long integer to be printed in binary
*Return: void
*/
void print_binary(unsigned long int n)
{
int i;
if (n == 0)
{
putchar('0');
return;
}
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
{
if ((n >> i) & 1)
break;
}
for (; i >= 0; i--)
{
if ((n >> i) & 1)
putchar('1');
else
putchar('0');
}
}
