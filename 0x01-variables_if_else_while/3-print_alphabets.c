#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Main function of my project
*
*
*Return: return 0 everytime
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}