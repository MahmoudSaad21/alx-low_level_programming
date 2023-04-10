#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/
int main(int argc, char *argv[])
{
  int ce = 0, ch = 0, temp = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) <= 0)
{
printf("0\n");
return (0);
}
ce = atoi(argv[1])
ch = ch + ce%25;
temp = ce/25;
ce = ce - (temp*25);
ch = ch + ce%10;
temp = ce/10;
ce = ce - (temp*10);
ch = ch + ce%5;
temp = ce/5;
ce = ce - (temp*5);
ch = ch + ce%2;
temp = ce/2;
ce = ce - (temp*2);
ch = ch + ce;
printf("%d\n", ch);
return (0);
}
