#include "main.h"
/**
*factorial - returns the factorial
*@n:target
*Return: returns the factorial
*/
int factorial(int n);
{
int i = 1;
if (n != 0)
i = i * factorial(n - 1);
return (i);
}
