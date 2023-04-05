#include "main.h"
/**
*is_prime_number - see if the number is prime or not
*@n:target
*Return: returns the value
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (is_prime_number_help(n / 2, n));
}
/**
*is_prime_number_help - returns the square root of a number
*@x: test number
*@n: squared number
*Return: the square root of n
*/
int is_prime_number_help(int x, int n)
{
if (x <= 1)
return (1);
else if (n % x == 0)
return (0);
return (is_prime_number_help(x - 1, n));
}
