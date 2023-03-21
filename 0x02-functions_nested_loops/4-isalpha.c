#include "main.h"
/**
*_islower - controls if a character is in lowercase
*@c: is the char
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
