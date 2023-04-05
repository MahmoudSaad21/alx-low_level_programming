#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number.
*@n:target
*Return: returns the value
*/
int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (n);
else
return (_sqrt_help(0, n));
}
/**
*_sqrt_help - returns the square root of a number
*@x: test number
*@n: squared number
*Return: the square root of n
*/
int _sqrt_help(int x, int n)
{
if (x > n / 2)
return (-1);
else if (x * x == n)
return (x);
return (_sqrt_help(x + 1, n));
}
