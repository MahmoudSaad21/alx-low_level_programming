#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the result
* @argc: The number of arguments
* @argv: An array.
* Return:
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int n1, n2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
op = argv[2];
n2 = atoi(argv[3]);
if (get_op_func(op) == NULL)
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
