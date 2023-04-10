#include "main.h"
/**
*_isupper - controls if a character is in uppercase
*@c: is the char
*Return: return 0 or 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

return (0);
}
