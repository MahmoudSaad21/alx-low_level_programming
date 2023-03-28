#include "main.h"
/**
*rev_string - prints a string, in reverse
*@s: first string
*Return: nothing
*/
void rev_string(char *s)
{
int len = 0, count = 0, j = 0;
while (s[len] != '\0')
len++;
j = len - 1;
while (count < j)
{
char temp = s[count];
s[count] = s[j];
s[j] = temp;
count++;
j--;
}
}
