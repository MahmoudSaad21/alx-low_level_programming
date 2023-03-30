#include "main.h"
/**
*  _strcmp - Function which compare two strings and
*@a: the array
*@n: the size
*Return: number
*/
void reverse_array(int *a, int n)
{
int tmp = 0, index = 0;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[index];
a[index] = a[n - 1 - index];
a[n - 1 - index] = tmp;
}
}
