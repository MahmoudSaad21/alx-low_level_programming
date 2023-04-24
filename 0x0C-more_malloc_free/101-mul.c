#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
*main - program that multiplies two positive numbers.
*@ac: the number of arg
*@av: the arg
*Return: If the number of arguments is incorrect exit with a status of 98
*/
int main(int ac, char *av[])
{
unsigned long mul;
int i = 0, j = 0;
if (ac != 3)
{
printf("Error\n");
exit(98);
}
for (i = 1; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
if (av[i][j] > 57 || av[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(av[2]);
printf("ahh%lu\n", mul);
return (0);
}
