#include "main.h"
/**
 * print_last_digit - return the last digit
 *@c: character to be verified
 *Return: return 0 or c or -c
 */
int print_last_digit(int c)
{
int temp;
if (c < 0)
temp = -1 * (c % 10);
else
temp = (c % 10);
_putchar(temp + 48);
return (temp);
}
