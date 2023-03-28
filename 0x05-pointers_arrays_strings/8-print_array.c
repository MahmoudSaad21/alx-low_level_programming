#include "main.h"
/**
*print_array -  prints every other character of a string
*@a: first num
*@b: first num
*Return: nothing
*/
void print_array(int *a, int n)
{
int count = 0;
for (count = 0; count < n; count++)
{
if (count != n - 1)
printf("%d, ", a[count]);
else
printf("%d", a[count]);
}
printf("\n");
}
