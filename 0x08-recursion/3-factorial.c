#include "main.h"
/**
*factorial - returns the factorial
*@n:target
*Return: returns the factorial
*/
int factorial(int n)
{
int i = 1;
if (n < 0)
return (-1);
else if (n != 0)
i = factorial(n - 1);
else
return (1);
return (n * i);
}
