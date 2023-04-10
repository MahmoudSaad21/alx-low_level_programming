#include "main.h"
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
sum1 = sum1 + a[i][j];
}
for (j = size - 1; j >= 0; j--)
{
sum2 = sum2 + a[i][j];
}
}
printf("%d, %d\n", sum1, sum2);
}
