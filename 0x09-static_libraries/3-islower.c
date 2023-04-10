#include "main.h"
/**
*_islower - controls if a character is in _islower
*@c: is the char
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
