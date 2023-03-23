#include "main.h"
/**
* print_most_numbers - function that print alphabet 10 times
*
*Return: return 0 everytime
*/
void print_most_numbers(void)
{
int n = 0;
for (n = 0; n <= 9; n++)
{
if (n != 2 && n != 4)
{
_putchar(n+'0');
}
}
_putchar(10);
}
