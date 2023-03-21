#include "main.h"
/**
*_abs return the absolute
*@c: character to be verified
*Return: return 0 or c or -c
*/
int print_sign(int c)
{
if (c == 0)
{
return (0);
}
else if (c > 0)
{
return (c);
}
else
{
return (-c);
}
}
