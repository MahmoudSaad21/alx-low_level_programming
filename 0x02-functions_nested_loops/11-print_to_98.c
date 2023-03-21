#include "main.h"
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
for (count = c ;count <= 98;count++)
{
printf(count);
printf(',');
printf(' ');
}
printf("\n");
}
else
{
for (count = c ;count >= 98;count--)
{
printf(count);
printf(',');
printf(' ');
}
printf("\n");
}
}
