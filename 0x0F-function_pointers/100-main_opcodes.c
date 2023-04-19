#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the opcodes of its own main function
*@argc: number of argument
*@argv: array of argument
*Return: 0 on success,1 on incorrect number of arguments,2 on negativenumber
*/
int main(int argc, char **argv)
{
int i, n;
char *p = (char *) main;
if (argc != 2)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
return (2);
}
for (i = 0; i < n; i++)
{
printf("%02x", *(p + i));
if (i < n - 1)
printf(" ");
}
printf("\n");
return (0);
}
