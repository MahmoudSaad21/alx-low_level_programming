#include "main.h"
/**
*print_alphabet - function that print alphabet
*
*
*Return: return 0 everytime
*/
void print_alphabet_x10(void)
{
int count;
int count1;
for (count1 = 0; count1 <= 9; count1++)
{
for (count = 'a'; count <= 'z'; count++)
_putchar(count);
 
_putchar(10);
}
}
