#include <stdio.h>
/**
*main - prints out first 98
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int count;
unsigned long n1 = 0, n2 = 1, n3;
unsigned long n1_h1, n1_h2, n2_h1, n2_h2;
unsigned long h1, h2;

for (count = 0; count < 92; count++)
{
n3 = n1 + n2;
printf("%lu, ", n3);
n1 = n2;
n2 = n3;
}
n1_h1 = n1 / 10000000000;
n2_h1 = n2 / 10000000000;
n1_h2 = n1 % 10000000000;
n2_h2 = n2 % 10000000000;
for (count = 93; count < 99; count++)
{
h1 = n1_h1 + n2_h1;
h2 = n1_h2 + n2_h2;
if ((n1_h2 + n2_h2) > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (count != 98)
printf(", ");

n1_h1 = n2_h1;
n1_h2 = n2_h2;
n2_h1 = h1;
n2_h2 = h2;
}
printf("\n");
return (0);
}
