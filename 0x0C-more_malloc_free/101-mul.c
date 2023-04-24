#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*is_number - checks if a string is a valid number
*@str: the string to check
*Return: 1 if str is a number, 0 otherwise
*/
int is_number(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}
/**
*main - multiplies two positive numbers
*@argc: the number of arguments passed to the program
*@argv: an array of strings containing the arguments
*Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
unsigned int len1, len2, len_result;
unsigned int i, j, carry;
char *result;
if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
return (98);
}
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
len_result = len1 + len2;
result = calloc(len_result + 1, sizeof(char));
if (result == NULL)
return (1);
for (i = 0; i < len_result; i++)
{
result[i] = '0';
}
for (i = len1; i > 0; i--)
{
carry = 0;
for (j = len2; j > 0; j--)
{
carry += (argv[1][i - 1] - '0') * (argv[2][j - 1] - '0') + (result[i + j] - '0');
result[i + j] = (carry % 10) + '0';
carry /= 10;
}
result[i + j] = (carry % 10) + '0';
}
while (*result == '0' && *(result + 1) != '\0')
result++;
printf("%s\n", result);
return (0);
}
