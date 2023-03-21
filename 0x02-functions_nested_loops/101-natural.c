#include <stdio.h>
/**
 * main - return the sum
 *
 * Return: return 0 or c or -c
 */
int main(void)
{
int n, sum = 0;
for (n = 0; n < 1024; n = n + 3)
{
if(n < 1024 && n % 5 != 0)
sum += n;
}
for (n = 0; n < 1024; n = n + 5)
{
if(n<1024)
sum += n;
}
printf("%d \n", sum);
return (0);
}
