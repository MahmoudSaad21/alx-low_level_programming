#include "main.h"
#include <stdio.h>
/**
* main -  prints a square
*
*Return: return nothing
*/
int main(void)
{
int count1;
for (count1 = 1; count1 <= 100; count1++)
{
if (count1 % 3 == 0 && count1 % 5 == 0)
printf("FizzBuzz");
else if (count1 % 3 == 0 )
printf("Fizz");
else if (count1 % 5 == 0 )
printf("Buzz");
else
printf(count1);
printf(" ");
}
_putchar(10);
return (0);
}
