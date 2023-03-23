#include "main.h"
/**
 *_isdigit - controls if a character is in uppercase
 *@c: is the char
 *Return: return 0 or 1
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 58)
return (1);
return (0);
}
