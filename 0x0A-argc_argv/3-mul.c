#include <stdio.h>
#include <stdlib.h>
/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
int i, mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
mul = mul * atoi(argv[i]);
printf("%d\n", mul);
return (0);
}
else
printf("Error\n");
return (1);
}
