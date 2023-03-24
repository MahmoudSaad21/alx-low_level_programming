#include "main.h"
#include <stdio.h>
/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/
int main(void)
{
int count1;
for (count1 = 1; count1 <= 100; count1++)
{
if ((count1 % 3 == 0) && (count1 % 5 == 0))
printf("FizzBuzz");
else if ((count1 % 3) == 0)
printf("Fizz");
else if (count1 % 5 == 0)
printf("Buzz");
else
printf("%d", count1);
if(count1 != 100)
printf(" ");
}
printf("\n");
return (0);
}
