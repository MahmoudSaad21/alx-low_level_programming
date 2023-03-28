#include "main.h"
/**
*rev_string - prints a string, in reverse
*@s: first string
*Return: nothing
*/
void rev_string(char *s)
{
int len = 0, count = 0;
while (s[len] != '\0')
len++;
int j = len - 1;
while (count < j)
{
char temp = str[count];
str[count] = str[j];
str[j] = temp;
count++;
j--;
}
}
