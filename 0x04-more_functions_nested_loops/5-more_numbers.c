#include "main.h"
/**
* more_numbers - function that print numbers 10 times
*
*Return: return 0 everytime
*/
void more_numbers(void)
{
int n = 0;
int count = 0;
for (count = 0; count < 10; count++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
_putchar(10);
}
}
