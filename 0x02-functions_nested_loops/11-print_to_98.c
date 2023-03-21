#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - return the last digit
 *@c: character to be verified
 *Return: return 0 or c or -c
 */
void print_to_98(int c)
{
int count;
if (c <= 98)
{
for (count = c ;count <98;count++)
{
printf("%d, ", count);
}
printf("%d\n", count);
}
else
{
for (count = c ;count > 98;count--)
{
printf("%d, ", count);
}
printf("%d\n", count);
}
}
