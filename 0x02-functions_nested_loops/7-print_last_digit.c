#include "main.h"
/**
 * print_last_digit - return the last digit
 *@c: character to be verified
 *Return: return 0 or c or -c
 */
int print_last_digit(int c)
{
int temp = _abs(c%10);
_putchar(temp+48);
return (temp);
}
