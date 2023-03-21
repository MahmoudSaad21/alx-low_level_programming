#include <stdio.h>
/**
 * add - return the sum
 * @n1: first number
 * @n2: second number
 * Return: return 0 or c or -c
 */
int main(void)
{
int n, sum = 0;
for (n = 0; n < 1024; n = n + 3)
{
sum += n;
}
for (n = 0; n < 1024; n = n + 5)
{
sum += n;
}
printf("%d \n", sum);
return (0);
}
