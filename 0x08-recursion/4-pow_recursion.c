#include "main.h"
/**
*_pow_recursion - returns the factorial
*@x:value
*@y:power
*Return: returns the value
*/
int _pow_recursion(int x, int y)
{
if (x == 1 || y == 0)
return(1);
else
return(x * _pow_recursion(x, y - 1));
}
